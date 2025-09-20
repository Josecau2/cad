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

// Database connection and initialization functions from branch_map.yaml
bool FUN_140070c70();  // Initialize database connection
bool FUN_140070cd0();  // Connect to database
bool FUN_140070d14();  // Disconnect from database
bool FUN_140070d98();  // Test database connection
bool FUN_140070dd8();  // Get database status
bool FUN_140070e50();  // Set connection timeout
bool FUN_140070f2c();  // Get connection info

// Table operations
bool FUN_140071040();  // Create table
bool FUN_1400710ac();  // Drop table
bool FUN_140071128();  // Alter table
bool FUN_140071194();  // Rename table
bool FUN_14007121c();  // Truncate table
bool FUN_1400712bc();  // Get table info
bool FUN_140071360();  // List tables
bool FUN_140071374();  // Check table exists
bool FUN_140071388();  // Get table schema
bool FUN_14007139c();  // Get table statistics
bool FUN_1400713b0();  // Optimize table
bool FUN_1400713f4();  // Repair table
bool FUN_140071438();  // Analyze table

// Query operations
bool FUN_14007147c();  // Execute query
bool FUN_1400714c0();  // Execute prepared statement
bool FUN_140071504();  // Execute batch query
bool FUN_140071548();  // Execute select query
bool FUN_14007158c();  // Execute insert query
bool FUN_1400715d0();  // Execute update query
bool FUN_140071660();  // Execute delete query
bool FUN_1400716a4();  // Execute stored procedure
bool FUN_1400716e8();  // Get query result
bool FUN_140071774();  // Get result count
bool FUN_140071804();  // Get result metadata
bool FUN_1400718d0();  // Free query result
bool FUN_14007199c();  // Cancel query

// Transaction management
bool FUN_140071b68();  // Begin transaction
bool FUN_140071bb0();  // Commit transaction
bool FUN_140071d5c();  // Rollback transaction
bool FUN_140071e80();  // Save transaction point
bool FUN_140071ff4();  // Release transaction point
bool FUN_140072078();  // Get transaction status
bool FUN_140072124();  // Set transaction isolation level
bool FUN_1400721a8();  // Get transaction isolation level
bool FUN_14007222c();  // Set transaction timeout
bool FUN_1400722d8();  // Get transaction timeout

// Schema management
bool FUN_140072398();  // Create schema
bool FUN_140072590();  // Drop schema
bool FUN_1400726ac();  // Alter schema
bool FUN_140072908();  // Get schema info
bool FUN_140072944();  // List schemas
bool FUN_140072994();  // Check schema exists
bool FUN_140072a00();  // Get schema objects
bool FUN_140072b9c();  // Export schema

// Index operations
bool FUN_14007353c();  // Create index
bool FUN_140073950();  // Drop index
bool FUN_140073be8();  // Alter index
bool FUN_140073ec4();  // Rebuild index
bool FUN_14007416c();  // Get index info
bool FUN_1400743b8();  // List indexes
bool FUN_1400746e8();  // Check index exists
bool FUN_140074980();  // Analyze index
bool FUN_140074c78();  // Optimize index

// Backup and recovery
bool FUN_140074d04();  // Create backup
bool FUN_140074dec();  // Restore backup
bool FUN_140075184();  // Get backup info
bool FUN_1400751bc();  // List backups
bool FUN_14007528c();  // Delete backup
bool FUN_140076390();  // Verify backup
bool FUN_140076454();  // Compress backup
bool FUN_14007650c();  // Decompress backup

// Performance monitoring
bool FUN_1400765c4();  // Get performance metrics
bool FUN_14007668c();  // Get query statistics
bool FUN_140076760();  // Get connection statistics
bool FUN_140076808();  // Get table statistics
bool FUN_140076980();  // Get index statistics
bool FUN_140076ac4();  // Get cache statistics
bool FUN_140076b74();  // Get lock statistics
bool FUN_140076e3c();  // Get transaction statistics
bool FUN_140076e84();  // Reset statistics

// Data migration
bool FUN_1400774c0();  // Export data
bool FUN_14007752c();  // Import data
bool FUN_140077658();  // Migrate data
bool FUN_140077738();  // Transform data
bool FUN_14007775c();  // Validate data
bool FUN_1400777cc();  // Clean data
bool FUN_1400777e8();  // Merge data
bool FUN_140077808();  // Split data
bool FUN_14007786c();  // Copy data
bool FUN_1400778e4();  // Sync data

// Security and access control
bool FUN_1400779c8();  // Create user
bool FUN_140077a40();  // Drop user
bool FUN_140077d5c();  // Grant permissions
bool FUN_140077d78();  // Revoke permissions
bool FUN_140077dbc();  // Change password
bool FUN_140077dd8();  // Get user info
bool FUN_140077dfc();  // List users
bool FUN_140077e10();  // Check user exists
bool FUN_140077e44();  // Get user permissions
bool FUN_140077e5c();  // Set user role
bool FUN_140077e84();  // Get user role
bool FUN_140077e98();  // Create role

// Database maintenance
bool FUN_140077f7c();  // Vacuum database
bool FUN_140077f94();  // Reindex database
bool FUN_14007801c();  // Check database integrity
bool FUN_1400780a0();  // Repair database
bool FUN_14007813c();  // Optimize database
bool FUN_140078148();  // Compact database
bool FUN_14007818c();  // Defragment database
bool FUN_1400782e8();  // Update statistics
bool FUN_140078380();  // Clean up logs
bool FUN_1400784ac();  // Archive old data
bool FUN_1400784f4();  // Purge deleted records

// Configuration management
bool FUN_14007856c();  // Get database configuration
bool FUN_14007860c();  // Set database configuration
bool FUN_140078758();  // Reset configuration
bool FUN_140078874();  // Save configuration
bool FUN_140078910();  // Load configuration
bool FUN_140079244();  // Validate configuration
bool FUN_140079328();  // Get configuration schema
bool FUN_140079428();  // Update configuration

// Replication and clustering
bool FUN_140079c1c();  // Setup replication
bool FUN_140079df0();  // Start replication
bool FUN_14007a064();  // Stop replication
bool FUN_14007a1d8();  // Get replication status
bool FUN_14007a53c();  // Configure replication
bool FUN_14007a5ec();  // Add replication node
bool FUN_14007a990();  // Remove replication node
bool FUN_14007a9e0();  // Sync replication
bool FUN_14007aa18();  // Failover replication

// Logging and auditing
bool FUN_14007ab40();  // Enable logging
bool FUN_14007ac04();  // Disable logging
bool FUN_14007ad60();  // Set log level
bool FUN_14007ae00();  // Get log entries
bool FUN_14007af2c();  // Clear logs
bool FUN_14007aff0();  // Archive logs
bool FUN_14007b03c();  // Search logs
bool FUN_14007b07c();  // Export logs
bool FUN_14007b0e8();  // Import logs

// Cache management
bool FUN_14007b29c();  // Enable cache
bool FUN_14007b40c();  // Disable cache
bool FUN_14007b524();  // Clear cache
bool FUN_14007b9e8();  // Get cache info
bool FUN_14007baac();  // Set cache size
bool FUN_14007bbf0();  // Get cache size
bool FUN_14007c04c();  // Warm up cache
bool FUN_14007c38c();  // Preload cache

// Connection pooling
bool FUN_14007c618();  // Create connection pool
bool FUN_14007ca9c();  // Get connection from pool
bool FUN_14007cd18();  // Return connection to pool
bool FUN_14007cefc();  // Close connection pool
bool FUN_14007cfa4();  // Get pool statistics
bool FUN_14007d6c4();  // Configure pool settings
bool FUN_14007db38();  // Resize connection pool

// Database triggers
bool FUN_14007db64();  // Create trigger
bool FUN_14007dd10();  // Drop trigger
bool FUN_14007ddc0();  // Enable trigger
bool FUN_14007ddd8();  // Disable trigger
bool FUN_14007dde0();  // Get trigger info
bool FUN_14007dde8();  // List triggers
bool FUN_14007de9c();  // Alter trigger

// Stored procedures and functions
bool FUN_14007deac();  // Create stored procedure
bool FUN_14007df44();  // Drop stored procedure
bool FUN_14007dfdc();  // Execute stored procedure
bool FUN_14007e060();  // Get procedure info
bool FUN_14007e068();  // List procedures
bool FUN_14007e218();  // Create function
bool FUN_14007e310();  // Drop function
bool FUN_14007e3c8();  // Execute function

// Views management
bool FUN_14007e580();  // Create view
bool FUN_14007e8e0();  // Drop view
bool FUN_14007e960();  // Alter view
bool FUN_14007edcc();  // Get view info
bool FUN_14007eff4();  // List views
bool FUN_14007f0d8();  // Refresh view
bool FUN_14007f110();  // Update view

// Constraints management
bool FUN_14007f208();  // Add constraint
bool FUN_14007f298();  // Drop constraint
bool FUN_14007f3fc();  // Enable constraint
bool FUN_14007f62c();  // Disable constraint
bool FUN_14007f8f8();  // Get constraint info
bool FUN_14007f9f4();  // List constraints
bool FUN_14007fa34();  // Check constraint
bool FUN_14007fbe0();  // Validate constraint

}  // namespace db
