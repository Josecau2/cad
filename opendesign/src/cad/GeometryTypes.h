#pragma once

#include <vector>
#include <memory>
#include <string>
#include <cmath>

namespace cad::geometry {

// Basic 2D/3D point structure
struct Point {
    double x, y, z;
    
    Point() : x(0), y(0), z(0) {}
    Point(double x_, double y_, double z_ = 0) : x(x_), y(y_), z(z_) {}
    
    // Distance to another point
    double distanceTo(const Point& other) const {
        double dx = x - other.x;
        double dy = y - other.y;
        double dz = z - other.z;
        return std::sqrt(dx*dx + dy*dy + dz*dz);
    }
    
    // Midpoint with another point
    Point midpoint(const Point& other) const {
        return Point((x + other.x) / 2.0, (y + other.y) / 2.0, (z + other.z) / 2.0);
    }
    
    // Vector operations
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y, z + other.z);
    }
    
    Point operator-(const Point& other) const {
        return Point(x - other.x, y - other.y, z - other.z);
    }
    
    Point operator*(double scalar) const {
        return Point(x * scalar, y * scalar, z * scalar);
    }
};

// Basic line structure
struct Line {
    Point start, end;
    
    Line() = default;
    Line(const Point& start_, const Point& end_) : start(start_), end(end_) {}
    
    // Length of the line
    double length() const {
        return start.distanceTo(end);
    }
    
    // Angle of the line (in radians, from X-axis)
    double angle() const {
        double dx = end.x - start.x;
        double dy = end.y - start.y;
        return std::atan2(dy, dx);
    }
    
    // Extend line by a distance
    Line extend(double distance) const {
        double len = length();
        if (len == 0) return *this;
        
        double ratio = (len + distance) / len;
        Point direction = end - start;
        Point newEnd = start + (direction * ratio);
        return Line(start, newEnd);
    }
    
    // Get point at parameter t (0 = start, 1 = end)
    Point pointAt(double t) const {
        return start + ((end - start) * t);
    }
};

// Basic circle structure
struct Circle {
    Point center;
    double radius;
    
    Circle() : radius(0) {}
    Circle(const Point& center_, double radius_) : center(center_), radius(radius_) {}
    
    // Area of the circle
    double area() const {
        return M_PI * radius * radius;
    }
    
    // Circumference of the circle
    double circumference() const {
        return 2 * M_PI * radius;
    }
    
    // Check if point is inside circle
    bool contains(const Point& point) const {
        return center.distanceTo(point) <= radius;
    }
};

// Basic arc structure
struct Arc {
    Point center;
    double radius;
    double startAngle, endAngle; // in radians
    
    Arc() : radius(0), startAngle(0), endAngle(0) {}
    Arc(const Point& center_, double radius_, double start_, double end_) 
        : center(center_), radius(radius_), startAngle(start_), endAngle(end_) {}
    
    // Arc length
    double length() const {
        double angleSpan = endAngle - startAngle;
        if (angleSpan < 0) angleSpan += 2 * M_PI;
        return radius * angleSpan;
    }
    
    // Get point at angle
    Point pointAtAngle(double angle) const {
        return Point(center.x + radius * std::cos(angle),
                    center.y + radius * std::sin(angle),
                    center.z);
    }
    
    // Start and end points
    Point startPoint() const { return pointAtAngle(startAngle); }
    Point endPoint() const { return pointAtAngle(endAngle); }
};

// Polygon structure
struct Polygon {
    std::vector<Point> vertices;
    
    Polygon() = default;
    Polygon(const std::vector<Point>& vertices_) : vertices(vertices_) {}
    
    // Add vertex
    void addVertex(const Point& vertex) {
        vertices.push_back(vertex);
    }
    
    // Area using shoelace formula (2D)
    double area() const {
        if (vertices.size() < 3) return 0;
        
        double area = 0;
        for (size_t i = 0; i < vertices.size(); ++i) {
            size_t j = (i + 1) % vertices.size();
            area += vertices[i].x * vertices[j].y;
            area -= vertices[j].x * vertices[i].y;
        }
        return std::abs(area) / 2.0;
    }
    
    // Perimeter
    double perimeter() const {
        if (vertices.size() < 2) return 0;
        
        double perimeter = 0;
        for (size_t i = 0; i < vertices.size(); ++i) {
            size_t j = (i + 1) % vertices.size();
            perimeter += vertices[i].distanceTo(vertices[j]);
        }
        return perimeter;
    }
    
    // Centroid
    Point centroid() const {
        if (vertices.empty()) return Point();
        
        Point center;
        for (const auto& vertex : vertices) {
            center = center + vertex;
        }
        return center * (1.0 / vertices.size());
    }
};

// Bounding box structure
struct BoundingBox {
    Point min, max;
    
    BoundingBox() = default;
    BoundingBox(const Point& min_, const Point& max_) : min(min_), max(max_) {}
    
    // Check if point is inside
    bool contains(const Point& point) const {
        return point.x >= min.x && point.x <= max.x &&
               point.y >= min.y && point.y <= max.y &&
               point.z >= min.z && point.z <= max.z;
    }
    
    // Expand to include point
    void expand(const Point& point) {
        if (point.x < min.x) min.x = point.x;
        if (point.y < min.y) min.y = point.y;
        if (point.z < min.z) min.z = point.z;
        if (point.x > max.x) max.x = point.x;
        if (point.y > max.y) max.y = point.y;
        if (point.z > max.z) max.z = point.z;
    }
    
    // Volume (or area in 2D)
    double volume() const {
        return (max.x - min.x) * (max.y - min.y) * (max.z - min.z);
    }
};

// Generic CAD entity base class
class CADEntity {
public:
    virtual ~CADEntity() = default;
    virtual std::string type() const = 0;
    virtual BoundingBox boundingBox() const = 0;
    virtual std::unique_ptr<CADEntity> clone() const = 0;
    
    // Transform operations
    virtual void translate(const Point& offset) = 0;
    virtual void rotate(const Point& center, double angle) = 0;
    virtual void scale(const Point& center, double factor) = 0;
};

// Concrete CAD entities
class PointEntity : public CADEntity {
public:
    Point point;
    
    PointEntity(const Point& p) : point(p) {}
    
    std::string type() const override { return "Point"; }
    BoundingBox boundingBox() const override { return BoundingBox(point, point); }
    std::unique_ptr<CADEntity> clone() const override { return std::make_unique<PointEntity>(point); }
    
    void translate(const Point& offset) override { point = point + offset; }
    void rotate(const Point& center, double angle) override {
        // 2D rotation around center
        double dx = point.x - center.x;
        double dy = point.y - center.y;
        double cos_a = std::cos(angle);
        double sin_a = std::sin(angle);
        point.x = center.x + dx * cos_a - dy * sin_a;
        point.y = center.y + dx * sin_a + dy * cos_a;
    }
    void scale(const Point& center, double factor) override {
        Point offset = (point - center) * factor;
        point = center + offset;
    }
};

class LineEntity : public CADEntity {
public:
    Line line;
    
    LineEntity(const Line& l) : line(l) {}
    
    std::string type() const override { return "Line"; }
    BoundingBox boundingBox() const override {
        return BoundingBox(
            Point(std::min(line.start.x, line.end.x), 
                  std::min(line.start.y, line.end.y),
                  std::min(line.start.z, line.end.z)),
            Point(std::max(line.start.x, line.end.x),
                  std::max(line.start.y, line.end.y),
                  std::max(line.start.z, line.end.z))
        );
    }
    std::unique_ptr<CADEntity> clone() const override { return std::make_unique<LineEntity>(line); }
    
    void translate(const Point& offset) override {
        line.start = line.start + offset;
        line.end = line.end + offset;
    }
    void rotate(const Point& center, double angle) override {
        PointEntity startEnt(line.start);
        PointEntity endEnt(line.end);
        startEnt.rotate(center, angle);
        endEnt.rotate(center, angle);
        line.start = startEnt.point;
        line.end = endEnt.point;
    }
    void scale(const Point& center, double factor) override {
        PointEntity startEnt(line.start);
        PointEntity endEnt(line.end);
        startEnt.scale(center, factor);
        endEnt.scale(center, factor);
        line.start = startEnt.point;
        line.end = endEnt.point;
    }
};

}  // namespace cad::geometry