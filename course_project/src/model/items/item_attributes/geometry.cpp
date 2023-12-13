#include <stdexcept> // std::runtime_error

#include "geometry.hpp"

namespace model {

Geometry::Geometry(double x1, double y1, double x2, double y2)
    : topLeftX_{x1}
    , topLeftY_{y1}
    , bottomRightX_{x2}
    , bottomRightY_{y2}
{
    if(topLeftX_ > bottomRightX_ || topLeftY_ < bottomRightY_) {
        throw std::runtime_error("Invalid coordinates for bounding box\n");
    }
}

double Geometry::getWidth() {
    return bottomRightX_ - topLeftX_;
}
    
double Geometry::getHeight() {
    return topLeftY_ - bottomRightY_;
}

} // namespace model