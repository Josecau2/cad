#include "catch2.hpp"

#include <cmath>
#include <stdexcept>

#include "db/Database.h"

namespace {
template <typename Func>
void expect_runtime_error(Func&& func) {
    bool caught = false;
    try {
        func();
    } catch (const std::runtime_error&) {
        caught = true;
    } catch (...) {
        caught = false;
    }
    REQUIRE(caught);
}
}  // namespace

TEST_CASE("Database configuration and migrations", "[db]") {
    db::ResetForTesting();

    db::Config config;
    config.database_url = "postgres://user:pass@host:5432/opendesign";
    config.sqlite_path = "/tmp/opendesign.sqlite";
    config.pool_min = 2;
    config.pool_max = 8;
    config.logging = "debug";

    db::Configure(config);
    auto stored = db::CurrentConfig();
    REQUIRE(stored.database_url == config.database_url);
    REQUIRE(stored.sqlite_path == config.sqlite_path);
    REQUIRE(stored.pool_max == 8);
    REQUIRE(stored.logging == "debug");

    db::Migration migration{ "V0001__init",
                             R"(create table catalogs (
                                    id bigserial primary key,
                                    name text not null
                                );
                                create table materials (
                                    id bigserial primary key,
                                    catalog_id bigint references catalogs(id)
                                );
                                create index materials_catalog_idx on materials(catalog_id);
                                PRAGMA journal_mode=WAL; )" };

    REQUIRE(db::ApplyMigration(migration));
    REQUIRE(!db::ApplyMigration(migration));
    REQUIRE(db::HasTable("catalogs"));
    REQUIRE(db::HasTable("materials"));
    REQUIRE(db::HasIndex("materials_catalog_idx"));
    REQUIRE(db::HasPragma("journal_mode"));
    auto applied = db::AppliedMigrations();
    REQUIRE(applied.size() == 1);
    REQUIRE(applied.front().version == "V0001__init");
}

TEST_CASE("Catalogs and materials enforce uniqueness", "[db]") {
    db::ResetForTesting();
    db::Configure({});

    auto& catalog = db::CreateCatalog("Premier", "2024.1", "Premier Vendor");
    auto& material = db::CreateMaterial(catalog.id,
                                        "SKU-001",
                                        "CODE-001",
                                        "Door Panel",
                                        "Maple",
                                        12.5,
                                        "{\"color\":\"white\"}");
    REQUIRE(material.catalog_id == catalog.id);

    auto materials = db::MaterialsForCatalog(catalog.id);
    REQUIRE(materials.size() == 1);
    REQUIRE(materials.front().sku == "SKU-001");

    expect_runtime_error([&]() {
        db::CreateMaterial(999, "BAD", "BAD", "Bad", "None", 0.0, "{}");
    });
    expect_runtime_error([&]() {
        db::CreateMaterial(catalog.id, "SKU-001", "DUP", "Dup", "None", 0.0, "{}");
    });
}

TEST_CASE("Projects, designs, and pricing", "[db]") {
    db::ResetForTesting();
    db::Configure({});

    auto& catalog = db::CreateCatalog("Premier", "2024.1", "Premier Vendor");
    auto& material = db::CreateMaterial(catalog.id,
                                        "SKU-002",
                                        "CODE-002",
                                        "Countertop",
                                        "Quartz",
                                        42.0,
                                        "{}" );

    auto& project = db::CreateProject("Kitchen Remodel", "Client A");
    auto& design = db::CreateDesign(project.id, "RevA", 2, "uri://design.zip", "abc123", "designer");
    REQUIRE(design.project_id == project.id);
    REQUIRE(design.rev == 2);

    auto& price_list = db::CreatePriceList("Retail", "USD", std::string{"2024-01-01"}, std::string{"2024-12-31"});
    auto& price = db::SetMaterialPrice(material.id, price_list.id, 99.99);
    REQUIRE(price.material_id == material.id);

    auto prices = db::PricesForMaterial(material.id);
    REQUIRE(prices.size() == 1);
    REQUIRE(std::abs(prices.front().unit_price - 99.99) < 1e-6);

    expect_runtime_error([&]() {
        db::SetMaterialPrice(material.id, price_list.id, 10.0);
    });
}

TEST_CASE("Import jobs and audit trail", "[db]") {
    db::ResetForTesting();
    db::Configure({});

    auto& job = db::CreateImportJob("buildrite", "/tmp/file.xml");
    REQUIRE(job.status == "queued");
    REQUIRE(!job.started_at.has_value());

    auto& running = db::UpdateImportJobStatus(job.id, "running", std::nullopt);
    REQUIRE(running.status == "running");
    REQUIRE(running.started_at.has_value());

    auto& done = db::UpdateImportJobStatus(job.id, "done", std::string{"completed"});
    REQUIRE(done.status == "done");
    REQUIRE(done.finished_at.has_value());
    REQUIRE(done.log == "completed");

    auto fetched = db::GetImportJob(job.id);
    REQUIRE(fetched.has_value());
    REQUIRE(fetched->status == "done");

    db::RecordAudit("designer", "create_material", "materials", std::to_string(1), "{}");
    db::RecordAudit("designer", "update_material", "materials", std::to_string(1), "{}");
    auto entries = db::AuditLogForEntity("materials", std::to_string(1));
    REQUIRE(entries.size() == 2);
    REQUIRE(entries.front().entity == "materials");
}
