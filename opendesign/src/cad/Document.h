#pragma once

#include <memory>
#include <optional>
#include <string>
#include <unordered_map>

namespace cad::document {

struct Document {
    int id = 0;
    std::string name;
    bool open = true;
};

class DocumentManager {
public:
    Document& create(const std::string& name);

    bool close(int id);

    std::optional<Document> get(int id) const;

    std::size_t count() const;

private:
    int next_id_ = 1;
    std::unordered_map<int, Document> documents_;
};

DocumentManager& global();

Document& NewDocument(const std::string& name);

bool CloseDocument(int id);

}  // namespace cad::document
