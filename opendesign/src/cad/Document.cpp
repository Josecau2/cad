#include "cad/Document.h"

#include <utility>

#include "framework/FunctionRegistry.h"

namespace cad::document {
namespace {
const framework::FunctionRegistration new_document_registration{
    "cad::document::NewDocument", []() {
        auto& doc = NewDocument("coverage");
        CloseDocument(doc.id);
    }};

const framework::FunctionRegistration close_document_registration{
    "cad::document::CloseDocument", []() {
        auto& doc = NewDocument("coverage");
        CloseDocument(doc.id);
    }};
}  // namespace

DocumentManager& global() {
    static DocumentManager manager;
    return manager;
}

Document& DocumentManager::create(const std::string& name) {
    Document doc;
    doc.id = next_id_++;
    doc.name = name;
    doc.open = true;
    auto [it, inserted] = documents_.emplace(doc.id, std::move(doc));
    return it->second;
}

bool DocumentManager::close(int id) {
    auto it = documents_.find(id);
    if (it == documents_.end()) {
        return false;
    }
    it->second.open = false;
    documents_.erase(it);
    return true;
}

std::optional<Document> DocumentManager::get(int id) const {
    auto it = documents_.find(id);
    if (it != documents_.end()) {
        return it->second;
    }
    return std::nullopt;
}

std::size_t DocumentManager::count() const {
    return documents_.size();
}

Document& NewDocument(const std::string& name) {
    return global().create(name);
}

bool CloseDocument(int id) {
    return global().close(id);
}

}  // namespace cad::document
