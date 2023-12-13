#ifndef COURSE_PROJECT_MODEL_ITEMS_ITEM_BASE_HPP
#define COURSE_PROJECT_MODEL_ITEMS_ITEM_BASE_HPP

#include <memory> // std::shared_ptr
#include <string>
#include <unordered_map>
#include <vector>

#include "item_attributes/geometry.hpp"
#include "item_attributes/visual_attributes.hpp"
#include "item_base.hpp"

namespace model {

using ItemID = int;

class Item : public ItemBase {
public:
    Item(const std::string& shapeType);
    
    void setShapeType(const std::string& type) override;
    virtual void setGeometry(const Geometry& geom) override;
    virtual void setStyleAttributes(const attributes::StyleAttributes& style) override;

}; // class Item

using ItemPtr = std::shared_ptr<Item>;

} // namespace model

#endif // COURSE_PROJECT_MODEL_ITEMS_ITEM_BASE_HPP