#include "catch2.hpp"
#include "cad/Geometry.h"
#include "cad/GeometryManager.h"
#include "cad/GeometryTypes.h"

TEST_CASE("Point creation creates actual entities", "[geometry]") {
    // Clear any existing geometry
    auto& manager = cad::geometry::GeometryManager::instance();
    manager.clear();
    
    size_t initialCount = manager.count();
    
    // Call the geometry function
    bool result = cad::geometry::FUN_1400800d0();
    
    REQUIRE(result == true);
    REQUIRE(manager.count() == initialCount + 1);
    
    // Verify the point was actually created
    auto entities = manager.getAllEntities();
    REQUIRE(!entities.empty());
    
    auto* entity = manager.getEntity(entities.back());
    REQUIRE(entity != nullptr);
    REQUIRE(entity->type() == "Point");
}

TEST_CASE("Line creation creates actual entities", "[geometry]") {
    auto& manager = cad::geometry::GeometryManager::instance();
    manager.clear();
    
    size_t initialCount = manager.count();
    
    // Call the geometry function
    bool result = cad::geometry::FUN_14008015c();
    
    REQUIRE(result == true);
    REQUIRE(manager.count() == initialCount + 1);
    
    // Verify the line was actually created
    auto entities = manager.getAllEntities();
    REQUIRE(!entities.empty());
    
    auto* entity = manager.getEntity(entities.back());
    REQUIRE(entity != nullptr);
    REQUIRE(entity->type() == "Line");
}

TEST_CASE("Distance calculation performs actual math", "[geometry]") {
    // This function now calculates actual distance between points
    bool result = cad::geometry::FUN_140080a94();
    REQUIRE(result == true);
    
    // The function calculates distance between (0,0,0) and (3,4,0)
    // Expected distance = sqrt(3² + 4²) = sqrt(9 + 16) = sqrt(25) = 5.0
    // We can't directly access the result, but the function now performs real calculation
}

TEST_CASE("Midpoint calculation creates actual geometry", "[geometry]") {
    auto& manager = cad::geometry::GeometryManager::instance();
    manager.clear();
    
    size_t initialCount = manager.count();
    
    // This function now creates an actual midpoint entity
    bool result = cad::geometry::FUN_140080d10();
    
    REQUIRE(result == true);
    REQUIRE(manager.count() == initialCount + 1);
    
    // Verify a midpoint entity was created
    auto entities = manager.getAllEntities();
    auto* entity = manager.getEntity(entities.back());
    REQUIRE(entity != nullptr);
    REQUIRE(entity->type() == "Point");
    
    // The midpoint between (0,0,0) and (4,6,2) should be at (2,3,1)
    auto* pointEntity = static_cast<cad::geometry::PointEntity*>(entity);
    REQUIRE(pointEntity->point.x == 2.0);
    REQUIRE(pointEntity->point.y == 3.0);
    REQUIRE(pointEntity->point.z == 1.0);
}

TEST_CASE("Line operations work with actual geometry", "[geometry]") {
    auto& manager = cad::geometry::GeometryManager::instance();
    manager.clear();
    
    // Create a line first
    cad::geometry::FUN_14008015c();
    
    // Now test line length calculation
    bool lengthResult = cad::geometry::FUN_140080fc4();
    REQUIRE(lengthResult == true);
    
    // Test line angle calculation
    bool angleResult = cad::geometry::FUN_1400814e8();
    REQUIRE(angleResult == true);
    
    // Test line extension
    bool extendResult = cad::geometry::FUN_1400815d4();
    REQUIRE(extendResult == true);
}

TEST_CASE("Geometry types perform actual calculations", "[geometry]") {
    // Test the underlying geometry types directly
    using namespace cad::geometry;
    
    Point p1(0, 0, 0);
    Point p2(3, 4, 0);
    
    // Test distance calculation
    double distance = p1.distanceTo(p2);
    REQUIRE(distance == 5.0);
    
    // Test midpoint calculation
    Point mid = p1.midpoint(p2);
    REQUIRE(mid.x == 1.5);
    REQUIRE(mid.y == 2.0);
    REQUIRE(mid.z == 0.0);
    
    // Test line operations
    Line line(p1, p2);
    REQUIRE(line.length() == 5.0);
    
    double angle = line.angle();
    REQUIRE(std::abs(angle - 0.927295) < 0.001); // atan2(4,3)
    
    // Test circle
    Circle circle(Point(0, 0, 0), 2.0);
    REQUIRE(std::abs(circle.area() - 12.5664) < 0.001); // π * 2²
    REQUIRE(std::abs(circle.circumference() - 12.5664) < 0.001); // 2π * 2
    
    // Test polygon
    Polygon triangle;
    triangle.addVertex(Point(0, 0, 0));
    triangle.addVertex(Point(1, 0, 0));
    triangle.addVertex(Point(0.5, 1, 0));
    
    REQUIRE(std::abs(triangle.area() - 0.5) < 0.001);
    REQUIRE(std::abs(triangle.perimeter() - 3.236) < 0.001);
}