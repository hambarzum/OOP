#ifndef RENDERING_SHAPES_SHAPE_HPP
#define RENDERING_SHAPES_SHAPE_HPP

#include <memory> // std::unique_ptr

#include "../../model/items/item_base.hpp"

namespace rendering {

class IShape;
using IShapePtr = std::unique_ptr<IShape>;

class IShape {
public:
    virtual IShapePtr clone() = 0;
    virtual void setItem(model::ItemBasePtr) = 0;

    virtual ~IShape() = default;
}; // class IShape

} // namespace rendering

#endif // RENDERING_SHAPES_SHAPE_HPP