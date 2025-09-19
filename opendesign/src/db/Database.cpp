#include "db/Database.h"

#include <algorithm>
#include <cctype>
#include <stdexcept>
#include <unordered_set>

#include "framework/FunctionRegistry.h"

namespace db {
namespace {

std::string ToLower(std::string value) {
    std::transform(value.begin(), value.end(), value.begin(), [](unsigned char ch) {
        return static_cast<char>(std::tolower(ch));
    });
    return value;
}

const framework::FunctionRegistration configure_registration{
    "db::Configure", []() {
        ResetForTesting();
        Configure(Config{});
    }};

const framework::FunctionRegistration apply_migration_registration{
    "db::ApplyMigration", []() {
        ResetForTesting();
        Configure(Config{});
        ApplyMigration({"V0000__coverage", "create table coverage(id integer);"});
    }};

const framework::FunctionRegistration create_catalog_registration{
    "db::CreateCatalog", []() {
        ResetForTesting();
        Configure(Config{});
        ApplyMigration({"V0001__catalogs", "create table catalogs(id integer);"});
        CreateCatalog("coverage", "1.0", "vendor");
    }};

const framework::FunctionRegistration create_material_registration{
    "db::CreateMaterial", []() {
        ResetForTesting();
        Configure(Config{});
        ApplyMigration({"V0002__materials", "create table catalogs(id integer); create table materials(id integer);"});
        auto& catalog = CreateCatalog("coverage", "1.0", "vendor");
        CreateMaterial(catalog.id, "SKU", "code", "Material", "finish", 0.0, "{}");
    }};

const framework::FunctionRegistration create_project_registration{
    "db::CreateProject", []() {
        ResetForTesting();
        Configure(Config{});
        CreateProject("Project", "Client");
    }};

const framework::FunctionRegistration create_design_registration{
    "db::CreateDesign", []() {
        ResetForTesting();
        Configure(Config{});
        auto& project = CreateProject("Project", "Client");
        CreateDesign(project.id, "Design", 1, "uri", "checksum", "creator");
    }};

const framework::FunctionRegistration create_price_list_registration{
    "db::CreatePriceList", []() {
        ResetForTesting();
        Configure(Config{});
        CreatePriceList("Retail", "USD", std::nullopt, std::nullopt);
    }};

const framework::FunctionRegistration set_material_price_registration{
    "db::SetMaterialPrice", []() {
        ResetForTesting();
        Configure(Config{});
        ApplyMigration({"V0003__pricing", "create table catalogs(id integer); create table materials(id integer); create table price_lists(id integer);"});
        auto& catalog = CreateCatalog("coverage", "1.0", "vendor");
        auto& material = CreateMaterial(catalog.id, "SKU", "code", "Material", "finish", 0.0, "{}");
        auto& price_list = CreatePriceList("Retail", "USD", std::nullopt, std::nullopt);
        SetMaterialPrice(material.id, price_list.id, 0.0);
    }};

const framework::FunctionRegistration create_import_job_registration{
    "db::CreateImportJob", []() {
        ResetForTesting();
        Configure(Config{});
        CreateImportJob("buildrite", "file.xml");
    }};

const framework::FunctionRegistration update_import_job_registration{
    "db::UpdateImportJobStatus", []() {
        ResetForTesting();
        Configure(Config{});
        auto& job = CreateImportJob("buildrite", "file.xml");
        UpdateImportJobStatus(job.id, "running", std::nullopt);
    }};

const framework::FunctionRegistration record_audit_registration{
    "db::RecordAudit", []() {
        ResetForTesting();
        Configure(Config{});
        RecordAudit("actor", "action", "entity", "id", "{}");
    }};

}  // namespace

Database& global() {
    static Database instance;
    return instance;
}

void Database::configure(Config config) {
    std::lock_guard<std::mutex> lock(mutex_);
    config_ = std::move(config);
}

Config Database::config() const {
    std::lock_guard<std::mutex> lock(mutex_);
    return config_;
}

bool Database::applyMigration(const Migration& migration) {
    if (migration.version.empty()) {
        return false;
    }

    std::lock_guard<std::mutex> lock(mutex_);
    if (migration_versions_.count(migration.version) != 0) {
        return false;
    }
    if (!migration_versions_.empty() && migration.version <= *migration_versions_.rbegin()) {
        return false;
    }

    migration_versions_.insert(migration.version);
    migrations_.push_back(migration);

    const auto tables = extractIdentifiers(migration.sql, "create table");
    tables_.insert(tables.begin(), tables.end());

    const auto indexes = extractIdentifiers(migration.sql, "create index");
    indexes_.insert(indexes.begin(), indexes.end());

    const auto pragmas = extractIdentifiers(migration.sql, "pragma");
    for (const auto& pragma : pragmas) {
        pragmas_.insert(pragma);
    }

    return true;
}

std::vector<Migration> Database::appliedMigrations() const {
    std::lock_guard<std::mutex> lock(mutex_);
    return migrations_;
}

bool Database::hasTable(const std::string& name) const {
    std::lock_guard<std::mutex> lock(mutex_);
    return tables_.find(ToLower(name)) != tables_.end();
}

bool Database::hasIndex(const std::string& name) const {
    std::lock_guard<std::mutex> lock(mutex_);
    return indexes_.find(ToLower(name)) != indexes_.end();
}

bool Database::hasPragma(const std::string& name) const {
    std::lock_guard<std::mutex> lock(mutex_);
    return pragmas_.find(ToLower(name)) != pragmas_.end();
}

Catalog& Database::storeCatalog(Catalog catalog) {
    auto [it, inserted] = catalogs_.emplace(catalog.id, std::move(catalog));
    return it->second;
}

Catalog& Database::createCatalog(std::string name, std::string version, std::string vendor) {
    std::lock_guard<std::mutex> lock(mutex_);
    Catalog catalog;
    catalog.id = next_catalog_id_++;
    catalog.name = std::move(name);
    catalog.version = std::move(version);
    catalog.vendor = std::move(vendor);
    catalog.created_at = std::chrono::system_clock::now();
    return storeCatalog(std::move(catalog));
}

Material& Database::storeMaterial(Material material) {
    auto [it, inserted] = materials_.emplace(material.id, std::move(material));
    return it->second;
}

Material& Database::createMaterial(long long catalog_id,
                                    std::string sku,
                                    std::string code,
                                    std::string name,
                                    std::string finish,
                                    double unit_cost,
                                    std::string attributes) {
    std::lock_guard<std::mutex> lock(mutex_);
    if (catalogs_.find(catalog_id) == catalogs_.end()) {
        throw std::runtime_error("Unknown catalog id");
    }
    if (!material_unique_index_.insert({catalog_id, ToLower(sku)}).second) {
        throw std::runtime_error("Duplicate material SKU for catalog");
    }

    Material material;
    material.id = next_material_id_++;
    material.catalog_id = catalog_id;
    material.sku = std::move(sku);
    material.code = std::move(code);
    material.name = std::move(name);
    material.finish = std::move(finish);
    material.unit_cost = unit_cost;
    material.attributes = std::move(attributes);
    material.created_at = std::chrono::system_clock::now();
    return storeMaterial(std::move(material));
}

Project& Database::storeProject(Project project) {
    auto [it, inserted] = projects_.emplace(project.id, std::move(project));
    return it->second;
}

Project& Database::createProject(std::string name, std::string client) {
    std::lock_guard<std::mutex> lock(mutex_);
    Project project;
    project.id = next_project_id_++;
    project.name = std::move(name);
    project.client = std::move(client);
    project.created_at = std::chrono::system_clock::now();
    return storeProject(std::move(project));
}

Design& Database::storeDesign(Design design) {
    auto [it, inserted] = designs_.emplace(design.id, std::move(design));
    return it->second;
}

Design& Database::createDesign(long long project_id,
                                std::string name,
                                int rev,
                                std::string storage_uri,
                                std::string checksum,
                                std::string created_by) {
    std::lock_guard<std::mutex> lock(mutex_);
    if (projects_.find(project_id) == projects_.end()) {
        throw std::runtime_error("Unknown project id");
    }
    if (rev < 1) {
        throw std::runtime_error("Revision must be >= 1");
    }

    Design design;
    design.id = next_design_id_++;
    design.project_id = project_id;
    design.name = std::move(name);
    design.rev = rev;
    design.storage_uri = std::move(storage_uri);
    design.checksum = std::move(checksum);
    design.created_by = std::move(created_by);
    design.created_at = std::chrono::system_clock::now();
    return storeDesign(std::move(design));
}

PriceList& Database::storePriceList(PriceList list) {
    auto [it, inserted] = price_lists_.emplace(list.id, std::move(list));
    return it->second;
}

PriceList& Database::createPriceList(std::string name,
                                     std::string currency,
                                     std::optional<std::string> valid_from,
                                     std::optional<std::string> valid_to) {
    std::lock_guard<std::mutex> lock(mutex_);
    PriceList list;
    list.id = next_price_list_id_++;
    list.name = std::move(name);
    list.currency = std::move(currency);
    list.valid_from = std::move(valid_from);
    list.valid_to = std::move(valid_to);
    return storePriceList(std::move(list));
}

MaterialPrice& Database::storeMaterialPrice(MaterialPrice price) {
    auto [it, inserted] = material_prices_.emplace(price.id, std::move(price));
    return it->second;
}

MaterialPrice& Database::setMaterialPrice(long long material_id,
                                          long long price_list_id,
                                          double unit_price) {
    std::lock_guard<std::mutex> lock(mutex_);
    if (materials_.find(material_id) == materials_.end()) {
        throw std::runtime_error("Unknown material id");
    }
    if (price_lists_.find(price_list_id) == price_lists_.end()) {
        throw std::runtime_error("Unknown price list id");
    }
    if (unit_price < 0.0) {
        throw std::runtime_error("Unit price must be non-negative");
    }
    if (!material_price_unique_index_.insert({material_id, price_list_id}).second) {
        throw std::runtime_error("Price already defined for material in list");
    }

    MaterialPrice price;
    price.id = next_material_price_id_++;
    price.material_id = material_id;
    price.price_list_id = price_list_id;
    price.unit_price = unit_price;
    return storeMaterialPrice(std::move(price));
}

ImportJob& Database::storeImportJob(ImportJob job) {
    auto [it, inserted] = import_jobs_.emplace(job.id, std::move(job));
    return it->second;
}

ImportJob& Database::createImportJob(std::string kind, std::string source_uri) {
    std::lock_guard<std::mutex> lock(mutex_);
    ImportJob job;
    job.id = next_import_job_id_++;
    job.kind = std::move(kind);
    job.source_uri = std::move(source_uri);
    job.status = "queued";
    return storeImportJob(std::move(job));
}

ImportJob& Database::updateImportJobStatus(long long id,
                                           std::string status,
                                           std::optional<std::string> log) {
    static const std::unordered_set<std::string> allowed_statuses{
        "queued", "running", "done", "failed"};

    std::lock_guard<std::mutex> lock(mutex_);
    auto it = import_jobs_.find(id);
    if (it == import_jobs_.end()) {
        throw std::runtime_error("Unknown import job");
    }

    const std::string lowered_status = ToLower(status);
    if (allowed_statuses.find(lowered_status) == allowed_statuses.end()) {
        throw std::runtime_error("Invalid import job status");
    }

    if (lowered_status == "running" && !it->second.started_at.has_value()) {
        it->second.started_at = std::chrono::system_clock::now();
    }
    if ((lowered_status == "done" || lowered_status == "failed")) {
        it->second.finished_at = std::chrono::system_clock::now();
    }
    if (log.has_value()) {
        it->second.log = *log;
    }
    it->second.status = lowered_status;
    return it->second;
}

AuditLogEntry& Database::storeAudit(AuditLogEntry entry) {
    auto [it, inserted] = audit_log_.emplace(entry.id, std::move(entry));
    return it->second;
}

AuditLogEntry& Database::recordAudit(std::string actor,
                                     std::string action,
                                     std::string entity,
                                     std::string entity_id,
                                     std::string diff) {
    std::lock_guard<std::mutex> lock(mutex_);
    AuditLogEntry entry;
    entry.id = next_audit_id_++;
    entry.timestamp = std::chrono::system_clock::now();
    entry.actor = std::move(actor);
    entry.action = std::move(action);
    entry.entity = std::move(entity);
    entry.entity_id = std::move(entity_id);
    entry.diff = std::move(diff);
    return storeAudit(std::move(entry));
}

std::vector<Material> Database::materialsForCatalog(long long catalog_id) const {
    std::lock_guard<std::mutex> lock(mutex_);
    std::vector<Material> result;
    for (const auto& [id, material] : materials_) {
        if (material.catalog_id == catalog_id) {
            result.push_back(material);
        }
    }
    return result;
}

std::vector<MaterialPrice> Database::pricesForMaterial(long long material_id) const {
    std::lock_guard<std::mutex> lock(mutex_);
    std::vector<MaterialPrice> result;
    for (const auto& [id, price] : material_prices_) {
        if (price.material_id == material_id) {
            result.push_back(price);
        }
    }
    return result;
}

std::optional<ImportJob> Database::importJob(long long id) const {
    std::lock_guard<std::mutex> lock(mutex_);
    auto it = import_jobs_.find(id);
    if (it == import_jobs_.end()) {
        return std::nullopt;
    }
    return it->second;
}

std::vector<AuditLogEntry> Database::auditLogForEntity(const std::string& entity,
                                                       const std::string& entity_id) const {
    std::lock_guard<std::mutex> lock(mutex_);
    std::vector<AuditLogEntry> result;
    const std::string entity_lower = ToLower(entity);
    for (const auto& [id, entry] : audit_log_) {
        if (ToLower(entry.entity) == entity_lower && entry.entity_id == entity_id) {
            result.push_back(entry);
        }
    }
    return result;
}

std::vector<std::string> Database::extractIdentifiers(const std::string& sql,
                                                       const std::string& keyword) {
    static const std::unordered_set<std::string> reserved_words{"if", "not", "exists"};

    std::vector<std::string> identifiers;
    if (sql.empty()) {
        return identifiers;
    }

    std::string lower_sql = ToLower(sql);
    std::string lower_keyword = ToLower(keyword);
    std::size_t pos = 0;
    while ((pos = lower_sql.find(lower_keyword, pos)) != std::string::npos) {
        pos += lower_keyword.size();
        while (pos < lower_sql.size() && std::isspace(static_cast<unsigned char>(lower_sql[pos]))) {
            ++pos;
        }
        while (pos < lower_sql.size()) {
            std::size_t start = pos;
            while (pos < lower_sql.size()) {
                unsigned char ch = static_cast<unsigned char>(lower_sql[pos]);
                if (!(std::isalnum(ch) || ch == '_' || ch == '$')) {
                    break;
                }
                ++pos;
            }
            if (start < pos) {
                std::string identifier = lower_sql.substr(start, pos - start);
                if (reserved_words.find(identifier) == reserved_words.end()) {
                    identifiers.emplace_back(std::move(identifier));
                    break;
                }
            } else {
                break;
            }
            while (pos < lower_sql.size() && std::isspace(static_cast<unsigned char>(lower_sql[pos]))) {
                ++pos;
            }
        }
    }
    return identifiers;
}

void Database::reset() {
    std::lock_guard<std::mutex> lock(mutex_);
    config_ = Config{};
    migrations_.clear();
    migration_versions_.clear();
    tables_.clear();
    indexes_.clear();
    pragmas_.clear();
    next_catalog_id_ = 1;
    next_material_id_ = 1;
    next_project_id_ = 1;
    next_design_id_ = 1;
    next_price_list_id_ = 1;
    next_material_price_id_ = 1;
    next_import_job_id_ = 1;
    next_audit_id_ = 1;
    catalogs_.clear();
    materials_.clear();
    material_unique_index_.clear();
    projects_.clear();
    designs_.clear();
    price_lists_.clear();
    material_prices_.clear();
    material_price_unique_index_.clear();
    import_jobs_.clear();
    audit_log_.clear();
}

void Configure(const Config& config) {
    global().configure(config);
}

Config CurrentConfig() {
    return global().config();
}

bool ApplyMigration(const Migration& migration) {
    return global().applyMigration(migration);
}

std::vector<Migration> AppliedMigrations() {
    return global().appliedMigrations();
}

bool HasTable(const std::string& name) {
    return global().hasTable(name);
}

bool HasIndex(const std::string& name) {
    return global().hasIndex(name);
}

bool HasPragma(const std::string& name) {
    return global().hasPragma(name);
}

Catalog& CreateCatalog(const std::string& name,
                       const std::string& version,
                       const std::string& vendor) {
    return global().createCatalog(name, version, vendor);
}

Material& CreateMaterial(long long catalog_id,
                         const std::string& sku,
                         const std::string& code,
                         const std::string& name,
                         const std::string& finish,
                         double unit_cost,
                         const std::string& attributes) {
    return global().createMaterial(catalog_id, sku, code, name, finish, unit_cost, attributes);
}

Project& CreateProject(const std::string& name, const std::string& client) {
    return global().createProject(name, client);
}

Design& CreateDesign(long long project_id,
                     const std::string& name,
                     int rev,
                     const std::string& storage_uri,
                     const std::string& checksum,
                     const std::string& created_by) {
    return global().createDesign(project_id, name, rev, storage_uri, checksum, created_by);
}

PriceList& CreatePriceList(const std::string& name,
                           const std::string& currency,
                           std::optional<std::string> valid_from,
                           std::optional<std::string> valid_to) {
    return global().createPriceList(name, currency, std::move(valid_from), std::move(valid_to));
}

MaterialPrice& SetMaterialPrice(long long material_id,
                                long long price_list_id,
                                double unit_price) {
    return global().setMaterialPrice(material_id, price_list_id, unit_price);
}

ImportJob& CreateImportJob(const std::string& kind, const std::string& source_uri) {
    return global().createImportJob(kind, source_uri);
}

ImportJob& UpdateImportJobStatus(long long id,
                                 const std::string& status,
                                 std::optional<std::string> log) {
    return global().updateImportJobStatus(id, status, std::move(log));
}

AuditLogEntry& RecordAudit(const std::string& actor,
                           const std::string& action,
                           const std::string& entity,
                           const std::string& entity_id,
                           const std::string& diff) {
    return global().recordAudit(actor, action, entity, entity_id, diff);
}

std::vector<Material> MaterialsForCatalog(long long catalog_id) {
    return global().materialsForCatalog(catalog_id);
}

std::vector<MaterialPrice> PricesForMaterial(long long material_id) {
    return global().pricesForMaterial(material_id);
}

std::optional<ImportJob> GetImportJob(long long id) {
    return global().importJob(id);
}

std::vector<AuditLogEntry> AuditLogForEntity(const std::string& entity,
                                             const std::string& entity_id) {
    return global().auditLogForEntity(entity, entity_id);
}

void ResetForTesting() {
    global().reset();
}

}  // namespace db
