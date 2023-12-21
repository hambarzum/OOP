#include <iostream>
#include <stdexcept> // std::runtime_error

#include "item.hpp"

namespace model {

Item::Item(const std::string& shapeType) 
    : ItemBase(shapeType)
{

}

void Item::accept(ItemVisitorPtr visitor) {
    visitor->visitItem(*this);
}

void Item::setShapeType(const std::string& type) {
    shapeType_ = type;
}

void Item::setGeometry(const Geometry& geom) {
    geom_ = geom;
}

void Item::setStyleAttributes(const attributes::StyleAttributes& attr) {
    styleAttributes_ = attr;
}

} // namespace model