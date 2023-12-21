#ifndef MODEL_ITEMS_ITEM_BASE_HPP
#define MODEL_ITEMS_ITEM_BASE_HPP

#include <memory> // std:shared_ptr
#include <string>

#include "../item_visitor.hpp"
#include "item_attributes/geometry.hpp"
#include "item_attributes/visual_attributes.hpp"

namespace model {

using ItemID = int;

class ItemBase {
public:
    ItemBase(const std::string& shapeType);
    
    virtual void accept(ItemVisitorPtr) = 0;

    ItemID getID() const;

    virtual void setShapeType(const std::string& type) = 0;
    std::string getShapeType() const;

    virtual void setGeometry(const Geometry& geom) = 0;
    Geometry getGeometry() const;

    virtual void setStyleAttributes(const attributes::StyleAttributes& style) = 0;
    attributes::StyleAttributes getStyleAttributes() const;

    virtual ~ItemBase() = default;

protected:
    const ItemID id_;
    std::string shapeType_;
    Geometry geom_;
    attributes::StyleAttributes styleAttributes_;
}; // class ItemBase

using ItemBasePtr = std::shared_ptr<ItemBase>;

} // namespace model

#endif // MODEL_ITEMS_ITEM_BASE_HPP