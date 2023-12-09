#include <iostream>
#include <stdexcept> // std::runtime_error

#include "item.hpp"

namespace model {

Item::Item(const std::string& typeName) {
    static int idCounter_ = 0;
    
    type_ = ItemTypeLibrary::getType(typeName);
    id_ = idCounter_++;
}

int Item::getID() const {
    return id_;
}

void Item::setType(ItemType type) {
    type_ = type;
}

ItemType Item::getType() const {
    return type_;
}

void Item::setBoundingBox(const attributes::BoundingBox& box) {
    boundingBox_ = box;
}

attributes::BoundingBox Item::getBoundingBox() const {
    return boundingBox_;
}

void Item::setStyleAttributes(const attributes::StyleAttributes& attr) {
    styleAttributes_ = attr;
}

attributes::StyleAttributes Item::getStyleAttributes() const {
    return styleAttributes_;
}

} // namespace model