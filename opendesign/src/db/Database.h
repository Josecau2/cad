#pragma once

#include <chrono>
#include <map>
#include <mutex>
#include <optional>
#include <set>
#include <string>
#include <utility>
#include <vector>

namespace db {

struct Config {
    std::string database_url;
    std::string sqlite_path;
    int pool_min = 2;
    int pool_max = 10;
    std::string logging = "info";
};

struct Migration {
    std::string version;
    std::string sql;
};

struct Catalog {
    long long id = 0;
    std::string name;
    std::string version;
    std::string vendor;
    std::chrono::system_clock::time_point created_at{};
};

struct Material {
    long long id = 0;
    long long catalog_id = 0;
    std::string sku;
    std::string code;
    std::string name;
    std::string finish;
    double unit_cost = 0.0;
    std::string attributes;
    std::chrono::system_clock::time_point created_at{};
};

struct Project {
    long long id = 0;
    std::string name;
    std::string client;
    std::string status = "active";
    std::chrono::system_clock::time_point created_at{};
};

struct Design {
    long long id = 0;
    long long project_id = 0;
    std::string name;
    int rev = 1;
    std::string storage_uri;
    std::string checksum;
    std::string created_by;
    std::chrono::system_clock::time_point created_at{};
};

struct PriceList {
    long long id = 0;
    std::string name;
    std::string currency = "USD";
    std::optional<std::string> valid_from;
    std::optional<std::string> valid_to;
};

struct MaterialPrice {
    long long id = 0;
    long long material_id = 0;
    long long price_list_id = 0;
    double unit_price = 0.0;
};

struct ImportJob {
    long long id = 0;
    std::string kind;
    std::string source_uri;
    std::string status = "queued";
    std::optional<std::chrono::system_clock::time_point> started_at;
    std::optional<std::chrono::system_clock::time_point> finished_at;
    std::string log;
};

struct AuditLogEntry {
    long long id = 0;
    std::chrono::system_clock::time_point timestamp{};
    std::string actor;
    std::string action;
    std::string entity;
    std::string entity_id;
    std::string diff;
};

class Database {
public:
    void configure(Config config);
    Config config() const;

    bool applyMigration(const Migration& migration);
    std::vector<Migration> appliedMigrations() const;

    bool hasTable(const std::string& name) const;
    bool hasIndex(const std::string& name) const;
    bool hasPragma(const std::string& name) const;

    Catalog& createCatalog(std::string name, std::string version, std::string vendor);
    Material& createMaterial(long long catalog_id,
                             std::string sku,
                             std::string code,
                             std::string name,
                             std::string finish,
                             double unit_cost,
                             std::string attributes);
    Project& createProject(std::string name, std::string client);
    Design& createDesign(long long project_id,
                         std::string name,
                         int rev,
                         std::string storage_uri,
                         std::string checksum,
                         std::string created_by);
    PriceList& createPriceList(std::string name,
                               std::string currency,
                               std::optional<std::string> valid_from,
                               std::optional<std::string> valid_to);
    MaterialPrice& setMaterialPrice(long long material_id,
                                    long long price_list_id,
                                    double unit_price);
    ImportJob& createImportJob(std::string kind, std::string source_uri);
    ImportJob& updateImportJobStatus(long long id,
                                     std::string status,
                                     std::optional<std::string> log);
    AuditLogEntry& recordAudit(std::string actor,
                               std::string action,
                               std::string entity,
                               std::string entity_id,
                               std::string diff);

    std::vector<Material> materialsForCatalog(long long catalog_id) const;
    std::vector<MaterialPrice> pricesForMaterial(long long material_id) const;
    std::optional<ImportJob> importJob(long long id) const;
    std::vector<AuditLogEntry> auditLogForEntity(const std::string& entity,
                                                 const std::string& entity_id) const;

    void reset();

private:
    Catalog& storeCatalog(Catalog catalog);
    Material& storeMaterial(Material material);
    Project& storeProject(Project project);
    Design& storeDesign(Design design);
    PriceList& storePriceList(PriceList list);
    MaterialPrice& storeMaterialPrice(MaterialPrice price);
    ImportJob& storeImportJob(ImportJob job);
    AuditLogEntry& storeAudit(AuditLogEntry entry);

    static std::vector<std::string> extractIdentifiers(const std::string& sql,
                                                       const std::string& keyword);

    Config config_{};

    mutable std::mutex mutex_;
    std::vector<Migration> migrations_;
    std::set<std::string> migration_versions_;
    std::set<std::string> tables_;
    std::set<std::string> indexes_;
    std::set<std::string> pragmas_;

    long long next_catalog_id_ = 1;
    long long next_material_id_ = 1;
    long long next_project_id_ = 1;
    long long next_design_id_ = 1;
    long long next_price_list_id_ = 1;
    long long next_material_price_id_ = 1;
    long long next_import_job_id_ = 1;
    long long next_audit_id_ = 1;

    std::map<long long, Catalog> catalogs_;
    std::map<long long, Material> materials_;
    std::set<std::pair<long long, std::string>> material_unique_index_;
    std::map<long long, Project> projects_;
    std::map<long long, Design> designs_;
    std::map<long long, PriceList> price_lists_;
    std::map<long long, MaterialPrice> material_prices_;
    std::set<std::pair<long long, long long>> material_price_unique_index_;
    std::map<long long, ImportJob> import_jobs_;
    std::map<long long, AuditLogEntry> audit_log_;
};

Database& global();

void Configure(const Config& config);
Config CurrentConfig();

bool ApplyMigration(const Migration& migration);
std::vector<Migration> AppliedMigrations();

bool HasTable(const std::string& name);
bool HasIndex(const std::string& name);
bool HasPragma(const std::string& name);

Catalog& CreateCatalog(const std::string& name,
                       const std::string& version,
                       const std::string& vendor);
Material& CreateMaterial(long long catalog_id,
                         const std::string& sku,
                         const std::string& code,
                         const std::string& name,
                         const std::string& finish,
                         double unit_cost,
                         const std::string& attributes);
Project& CreateProject(const std::string& name, const std::string& client);
Design& CreateDesign(long long project_id,
                     const std::string& name,
                     int rev,
                     const std::string& storage_uri,
                     const std::string& checksum,
                     const std::string& created_by);
PriceList& CreatePriceList(const std::string& name,
                           const std::string& currency,
                           std::optional<std::string> valid_from,
                           std::optional<std::string> valid_to);
MaterialPrice& SetMaterialPrice(long long material_id,
                                long long price_list_id,
                                double unit_price);
ImportJob& CreateImportJob(const std::string& kind, const std::string& source_uri);
ImportJob& UpdateImportJobStatus(long long id,
                                 const std::string& status,
                                 std::optional<std::string> log);
AuditLogEntry& RecordAudit(const std::string& actor,
                           const std::string& action,
                           const std::string& entity,
                           const std::string& entity_id,
                           const std::string& diff);

std::vector<Material> MaterialsForCatalog(long long catalog_id);
std::vector<MaterialPrice> PricesForMaterial(long long material_id);
std::optional<ImportJob> GetImportJob(long long id);
std::vector<AuditLogEntry> AuditLogForEntity(const std::string& entity,
                                             const std::string& entity_id);

void ResetForTesting();

}  // namespace db
