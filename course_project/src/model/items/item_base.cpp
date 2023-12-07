#include <iostream>
#include <stdexcept> // std::runtime_error

#include "item_base.hpp"

namespace model {

int ItemBase::idCounter_ = 0;

std::unordered_map<std::string, ItemType> ItemBase::typeLibrary_ = {
    {"Rect", ItemType::RECTANGLE},
    {"Elipse", ItemType::ELIPSE},
    {"Group", ItemType::GROUP}
};

ItemBase::ItemBase() {
    setID();
}

ItemBase::ItemBase(const std::string& typeName) {
    type_ = findType(typeName);
    setID();
}

int ItemBase::getID() const {
    return id_;
}

void ItemBase::setType(ItemType type) {
    type_ = type;
}

ItemType ItemBase::getType() const {
    return type_;
}

void ItemBase::setBoundingBox(const attributes::BoundingBox& box) {
    boundingBox_ = box;
}

attributes::BoundingBox ItemBase::getBoundingBox() const {
    return boundingBox_;
}

void ItemBase::setVisualAttributes(const attributes::VisualAttributes& attr) {
    visualAttributes_ = attr;
}

attributes::VisualAttributes ItemBase::getVisualAttributes() const {
    return visualAttributes_;
}

ItemType ItemBase::findType(const std::string& typeName) {
    const auto iter = typeLibrary_.find(typeName);

    if(iter == typeLibrary_.end()) {
        throw std::runtime_error("Uknown type: [" + typeName + "]\n");
    }

    return iter->second;
}

void ItemBase::setID() {
    id_ = idCounter_++;
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

} // namespace model