#pragma once

#include <array>
#include <string>

namespace render {

class Viewport {
public:
    void setSize(int width, int height);

    std::array<int, 2> size() const;

    void setProjection(const char* projection);

    const char* projection() const;

private:
    int width_ = 0;
    int height_ = 0;
    std::string projection_ = "perspective";
};

}  // namespace render
