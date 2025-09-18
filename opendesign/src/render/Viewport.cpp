#include "render/Viewport.h"

namespace render {

void Viewport::setSize(int width, int height) {
    width_ = width;
    height_ = height;
}

std::array<int, 2> Viewport::size() const {
    return {width_, height_};
}

void Viewport::setProjection(const char* projection) {
    if (projection) {
        projection_ = projection;
    } else {
        projection_.clear();
    }
}

const char* Viewport::projection() const {
    return projection_.c_str();
}

}  // namespace render
