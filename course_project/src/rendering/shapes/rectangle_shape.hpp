#ifndef RENDERING_SHAPES_RECTANGLE_SHAPE_HPP
#define RENDERING_SHAPES_RECTANGLE_SHAPE_HPP

#include "../../model/items/item_base.hpp"
#include "../textual_displayable.hpp"
#include "shape.hpp"

namespace rendering {

class RectShape : public IShape, public ITextualDisplayable {
public:
    IShapePtr clone() override;
    void setItem(model::ItemBasePtr) override;
    void print() override;

private:
    model::ItemBasePtr item_;
}; // class RectShape

} // napespace rendering

#endif // RENDERING_SHAPES_RECTANGLE_SHAPE_HPP