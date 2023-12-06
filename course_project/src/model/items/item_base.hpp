#ifndef COURSE_PROJECT_MODEL_ITEMS_ITEM_BASE_HPP
#define COURSE_PROJECT_MODEL_ITEMS_ITEM_BASE_HPP

#include <memory> // std::shared_ptr
#include <string>
#include <unordered_map>

#include "item_attributes/bounding_box.hpp"
#include "item_attributes/visual_attributes.hpp"

namespace model {

enum class ItemType {
    /// TODO: add rhombus shape to see how easily-extendible the code is
    RECTANGLE,
    ELIPSE,
    GROUP
}; // enum class ItemType

using TypeLibrary = std::unordered_map<std::string, ItemType>;

class ItemBase;
using ItemBasePtr = std::shared_ptr<ItemBase>;

class ItemBase {
public:
    ItemBase() = default;
    ItemBase(const std::string&);

    virtual void addItem(ItemBasePtr) = 0;
    virtual void removeItem(unsigned int) = 0;
    
    void setType(ItemType type);
    ItemType getType() const;
    void setBoundingBox(const attributes::BoundingBox& box);
    attributes::BoundingBox getBoundingBox() const;
    void setVisualAttributes(const attributes::VisualAttributes& attr);
    attributes::VisualAttributes getVisualAttributes() const;

private:
   ItemType findType(const std::string&);

private:
    unsigned int id_;
    ItemType type_;
    attributes::BoundingBox boundingBox_;
    attributes::VisualAttributes visualAttributes_;
    static TypeLibrary typeLibrary_;
}; // class ItemBase

} // namespace model

#endif // COURSE_PROJECT_MODEL_ITEMS_ITEM_BASE_HPP