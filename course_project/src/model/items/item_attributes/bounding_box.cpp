#include <stdexcept> // std::runtime_error

#include "bounding_box.hpp"

namespace model {

namespace attributes {

BoundingBox::BoundingBox(double x1, double y1, double x2, double y2)
    : topLeftX_{x1}
    , topLeftY_{y1}
    , bottomRightX_{x2}
    , bottomRightY_{y2}
{
    if(topLeftX_ > bottomRightX_ || topLeftY_ < bottomRightY_) {
        throw std::runtime_error("Invalid coordinates for bounding box\n");
    }
}

double BoundingBox::getWidth() {
    return bottomRightX_ - topLeftX_;
}
    
double BoundingBox::getHeight() {
    return topLeftY_ - bottomRightY_;
}

} // namespace attributes

} // namespace model