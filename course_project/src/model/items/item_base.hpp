#ifndef COURSE_PROJECT_MODEL_ITEMS_ITEM_BASE_HPP
#define COURSE_PROJECT_MODEL_ITEMS_ITEM_BASE_HPP

#include <memory> // std::shared_ptr
#include <string>

#include "item_attributes/bounding_box.hpp"
#include "item_attributes/visual_attributes.hpp"

namespace model {

enum class ItemType {
    RECTANGLE,
    ELIPSE,
    GROUP
}; // enum class ItemType

class ItemBase;
using ItemBasePtr = std::shared_ptr<ItemBase>;

class ItemBase {
public:
    ItemBase();
    virtual void addItem(ItemBasePtr) = 0;
    virtual void removeItem(unsigned int) = 0;
    
    void setType(ItemType type) {
        type_ = type;
    }

    ItemType getType() const {
        return type_;
    }

    void setBoundingBox(const attributes::BoundingBox& box) {
        boundingBox_ = box;
    }

    attributes::BoundingBox getBoundingBox() const {
        return boundingBox_;
    }

    void setVisualAttributes(const attributes::VisualAttributes& attr) {
        visualAttributes_ = attr;
    }    
    
    attributes::VisualAttributes getVisualAttributes() const {
        return visualAttributes_;
    }

private: // protected??
    unsigned int id_;
    ItemType type_;
    attributes::BoundingBox boundingBox_;
    attributes::VisualAttributes visualAttributes_;
}; // class ItemBase

} // namespace model

#endif // COURSE_PROJECT_MODEL_ITEMS_ITEM_BASE_HPP