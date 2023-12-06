#include "bounding_box.hpp"

namespace model {

namespace attributes {

BoundingBox::BoundingBox(double x1, double y1, double x2, double y2)
    : topLeftX_{x1}
    , topLeftY_{y1}
    , bottomRightX_{x2}
    , bottomRightY_{y2}
{

}

double BoundingBox::getWidth() {
    return bottomRightX_ - topLeftX_;
}
    
double BoundingBox::getHeight() {
    return topLeftY_- bottomRightY_;
}

} // namespace attributes

} // namespace model