#include "cad/Geometry.h"
#include "cad/GeometryManager.h"
#include <iostream>

int main() {
    std::cout << "=== CAD Geometry Functionality Demo ===" << std::endl;
    std::cout << std::endl;
    
    // Test the new geometry functions
    std::cout << "1. Testing basic geometry creation:" << std::endl;
    
    // Create point
    std::cout << "Creating point..." << std::endl;
    cad::geometry::FUN_1400800d0();
    
    std::cout << std::endl;
    
    // Create line
    std::cout << "Creating line..." << std::endl;
    cad::geometry::FUN_14008015c();
    
    std::cout << std::endl;
    
    // Test coordinate operations
    std::cout << "2. Testing coordinate operations:" << std::endl;
    
    // Set point coordinate
    std::cout << "Setting point coordinate..." << std::endl;
    cad::geometry::FUN_14008058c();
    
    std::cout << std::endl;
    
    // Get point coordinate
    std::cout << "Getting point coordinate..." << std::endl;
    cad::geometry::FUN_14008068c();
    
    std::cout << std::endl;
    
    // Test calculations
    std::cout << "3. Testing geometric calculations:" << std::endl;
    
    // Calculate distance
    std::cout << "Calculating point distance..." << std::endl;
    cad::geometry::FUN_140080a94();
    
    std::cout << std::endl;
    
    // Find midpoint
    std::cout << "Finding midpoint..." << std::endl;
    cad::geometry::FUN_140080d10();
    
    std::cout << std::endl;
    
    // Test line operations
    std::cout << "4. Testing line operations:" << std::endl;
    
    // Calculate line length
    std::cout << "Calculating line length..." << std::endl;
    cad::geometry::FUN_140080fc4();
    
    std::cout << std::endl;
    
    // Calculate line angle
    std::cout << "Calculating line angle..." << std::endl;
    cad::geometry::FUN_1400814e8();
    
    std::cout << std::endl;
    
    // Extend line
    std::cout << "Extending line..." << std::endl;
    cad::geometry::FUN_1400815d4();
    
    std::cout << std::endl;
    
    // Show geometry manager stats
    auto& manager = cad::geometry::GeometryManager::instance();
    std::cout << "5. Geometry Manager Status:" << std::endl;
    std::cout << "Total entities created: " << manager.count() << std::endl;
    
    if (manager.count() > 0) {
        auto bbox = manager.getOverallBoundingBox();
        std::cout << "Overall bounding box: ";
        std::cout << "(" << bbox.min.x << "," << bbox.min.y << "," << bbox.min.z << ") to ";
        std::cout << "(" << bbox.max.x << "," << bbox.max.y << "," << bbox.max.z << ")" << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "=== Demo Complete ===" << std::endl;
    
    return 0;
}