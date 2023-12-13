#include <iostream>

#include "rectangle_shape.hpp"

namespace rendering {

IShapePtr RectShape::clone() {
    return std::make_unique<RectShape>(*this);
}

void RectShape::setItem(model::ItemBasePtr item) {
    item_ = item;
}

void RectShape::print() {
    std::cout << "[ID: " << item_->getID() << "] Rect: width - " << item_->getGeometry().getWidth() << ", height - " << item_->getGeometry().getHeight() << std::endl; 
}

} // namespace rendering