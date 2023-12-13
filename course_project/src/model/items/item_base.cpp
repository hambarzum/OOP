#include "item_base.hpp"

namespace model {

static ItemID idCounter = 0;

ItemBase::ItemBase(const std::string& shapeType) 
    : shapeType_{shapeType}
    , id_{idCounter++}
{

}

ItemID ItemBase::getID() const {
    return id_;
}

std::string ItemBase::getShapeType() const {
    return shapeType_;
}

Geometry ItemBase::getGeometry() const {
    return geom_;
}

attributes::StyleAttributes ItemBase::getStyleAttributes() const {
    return styleAttributes_;
}

} // namespace model