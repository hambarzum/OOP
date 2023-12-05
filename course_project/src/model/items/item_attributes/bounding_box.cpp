#include "bounding_box.hpp"

namespace model {

Position::Position(double x, double y) 
    : xCoord_{x}
    , yCoord_{y}
{

}

BoundingBox::BoundingBox(const Position& tl, const Position& br) 
    : topLeft_{tl}
    , bottomRight_{br}
{

}

BoundingBox::BoundingBox(const Position& tl, double w, double h) {
    topLeft_ = tl;
    bottomRight_.xCoord_ = tl.xCoord_ + w;
    bottomRight_.yCoord_ = tl.yCoord_ - h;
}

double BoundingBox::getWidth() {
    return bottomRight_.xCoord_ - topLeft_.xCoord_;
}
    
double BoundingBox::getHeight() {
    return topLeft_.yCoord_ - bottomRight_.yCoord_;
}

}