#ifndef COURSE_PROJECT_MODEL_ITEMS_ITEM_BASE_HPP
#define COURSE_PROJECT_MODEL_ITEMS_ITEM_BASE_HPP

#include <memory> // std::shared_ptr
#include <string>
#include <unordered_map>
#include <vector>

#include "item_attributes/bounding_box.hpp"
#include "item_attributes/visual_attributes.hpp"
#include "item_type_library.hpp"

namespace model {

class Item {
public:
    Item(const std::string&);
    
    int getID() const;
    void setType(ItemType type);
    ItemType getType() const;
    void setBoundingBox(const attributes::BoundingBox& box);
    attributes::BoundingBox getBoundingBox() const;
    void setStyleAttributes(const attributes::StyleAttributes& attr);
    attributes::StyleAttributes getStyleAttributes() const;

private:
    int id_;
    ItemType type_;
    attributes::BoundingBox boundingBox_;
    attributes::StyleAttributes styleAttributes_;
}; // class Item

using ItemPtr = std::shared_ptr<Item>;

} // namespace model

#endif // COURSE_PROJECT_MODEL_ITEMS_ITEM_BASE_HPP