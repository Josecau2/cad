#pragma once

#include "cad/GeometryTypes.h"
#include <vector>
#include <memory>
#include <unordered_map>
#include <mutex>

namespace cad::geometry {

class GeometryManager {
public:
    using EntityId = size_t;
    static const EntityId INVALID_ID = 0;

private:
    mutable std::mutex mutex_;
    std::unordered_map<EntityId, std::unique_ptr<CADEntity>> entities_;
    EntityId next_id_ = 1;
    
public:
    static GeometryManager& instance() {
        static GeometryManager instance;
        return instance;
    }
    
    // Add entity and return its ID
    EntityId addEntity(std::unique_ptr<CADEntity> entity) {
        std::lock_guard<std::mutex> lock(mutex_);
        EntityId id = next_id_++;
        entities_[id] = std::move(entity);
        return id;
    }
    
    // Remove entity
    bool removeEntity(EntityId id) {
        std::lock_guard<std::mutex> lock(mutex_);
        return entities_.erase(id) > 0;
    }
    
    // Get entity
    CADEntity* getEntity(EntityId id) const {
        std::lock_guard<std::mutex> lock(mutex_);
        auto it = entities_.find(id);
        return (it != entities_.end()) ? it->second.get() : nullptr;
    }
    
    // Get all entities
    std::vector<EntityId> getAllEntities() const {
        std::lock_guard<std::mutex> lock(mutex_);
        std::vector<EntityId> ids;
        for (const auto& pair : entities_) {
            ids.push_back(pair.first);
        }
        return ids;
    }
    
    // Clear all entities
    void clear() {
        std::lock_guard<std::mutex> lock(mutex_);
        entities_.clear();
    }
    
    // Get count
    size_t count() const {
        std::lock_guard<std::mutex> lock(mutex_);
        return entities_.size();
    }
    
    // Transform operations on entity
    bool translateEntity(EntityId id, const Point& offset) {
        std::lock_guard<std::mutex> lock(mutex_);
        auto it = entities_.find(id);
        if (it != entities_.end()) {
            it->second->translate(offset);
            return true;
        }
        return false;
    }
    
    bool rotateEntity(EntityId id, const Point& center, double angle) {
        std::lock_guard<std::mutex> lock(mutex_);
        auto it = entities_.find(id);
        if (it != entities_.end()) {
            it->second->rotate(center, angle);
            return true;
        }
        return false;
    }
    
    bool scaleEntity(EntityId id, const Point& center, double factor) {
        std::lock_guard<std::mutex> lock(mutex_);
        auto it = entities_.find(id);
        if (it != entities_.end()) {
            it->second->scale(center, factor);
            return true;
        }
        return false;
    }
    
    // Find entities within bounding box
    std::vector<EntityId> findEntitiesInBox(const BoundingBox& box) const {
        std::lock_guard<std::mutex> lock(mutex_);
        std::vector<EntityId> result;
        
        for (const auto& pair : entities_) {
            BoundingBox entityBox = pair.second->boundingBox();
            // Simple overlap check
            if (!(entityBox.max.x < box.min.x || entityBox.min.x > box.max.x ||
                  entityBox.max.y < box.min.y || entityBox.min.y > box.max.y ||
                  entityBox.max.z < box.min.z || entityBox.min.z > box.max.z)) {
                result.push_back(pair.first);
            }
        }
        return result;
    }
    
    // Calculate overall bounding box
    BoundingBox getOverallBoundingBox() const {
        std::lock_guard<std::mutex> lock(mutex_);
        if (entities_.empty()) {
            return BoundingBox();
        }
        
        auto it = entities_.begin();
        BoundingBox overall = it->second->boundingBox();
        ++it;
        
        for (; it != entities_.end(); ++it) {
            BoundingBox entityBox = it->second->boundingBox();
            overall.expand(entityBox.min);
            overall.expand(entityBox.max);
        }
        
        return overall;
    }
    
    // Convenience methods for creating specific entities
    EntityId createPoint(double x, double y, double z = 0) {
        return addEntity(std::make_unique<PointEntity>(Point(x, y, z)));
    }
    
    EntityId createLine(double x1, double y1, double x2, double y2, double z1 = 0, double z2 = 0) {
        return addEntity(std::make_unique<LineEntity>(Line(Point(x1, y1, z1), Point(x2, y2, z2))));
    }
    
    EntityId createLine(const Point& start, const Point& end) {
        return addEntity(std::make_unique<LineEntity>(Line(start, end)));
    }
};

}  // namespace cad::geometry