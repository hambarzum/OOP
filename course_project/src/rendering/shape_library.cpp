#include "shape_library.hpp"
#include "shapes/rectangle_shape.hpp"

namespace rendering {

ShapeLibrary::ShapeLibrary() {
    lib_["Rect"] = std::make_unique<RectShape>();
    /// TODO: add ElipseShape
}

IShapePtr ShapeLibrary::getShape(model::ItemBasePtr item) {
    auto iter = lib_.find(item->getShapeType());

    iter->second->setItem(item);

    return iter->second->clone();
}

} // namespace rendering