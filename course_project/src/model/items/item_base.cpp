#include <stdexcept> // std::runtime_error

#include "item_base.hpp"

namespace model {

std::unordered_map<std::string, ItemType> ItemBase::typeLibrary_ = {
    {"Rect", ItemType::RECTANGLE},
    {"Elipse", ItemType::ELIPSE},
    {"Group", ItemType::GROUP}
};

ItemBase::ItemBase(const std::string& typeName) {
    type_ = findType(typeName);

    static unsigned int id = 0;
    id_ = id++;
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

} // namespace model