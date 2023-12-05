#ifndef COURSE_PROJECT_MODEL_ITEMS_ITEM_BASE_HPP
#define COURSE_PROJECT_MODEL_ITEMS_ITEM_BASE_HPP

#include <memory> // std::shared_ptr
#include <string>

#include "item_attributes.hpp"

namespace model {





class ItemBase;
using ItemBasePtr = std::shared_ptr<ItemBase>;

class ItemBase {
public:
    virtual void addItem(ItemBasePtr) = 0;
    virtual void removeItem(ItemBasePtr) = 0;
    
    void setType(ItemType type) {
        type_ = type;
    }

    ItemType getType() const {
        return type_;
    }

    void setBoundingBox(const BoundingBox& box) {
        boundingBox_ = box;
    }

    BoundingBox getBoundingBox() const {
        return boundingBox_;
    }

    void setVisualAttributes(const VisualAttributes& attr) {
        visualAttributes_ = attr;
    }    
    
    VisualAttributes getVisualAttributes() const {
        return visualAttributes_;
    }

private: // protected??
    ItemType type_;
    BoundingBox boundingBox_;
    VisualAttributes visualAttributes_;
}; // class ItemBase

} // namespace model

#endif // COURSE_PROJECT_MODEL_ITEMS_ITEM_BASE_HPP