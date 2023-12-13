#ifndef COURSE_PROJECT_SRC_RENDERING_ITEM_RENDERER_LIBRARY_HPP
#define COURSE_PROJECT_SRC_RENDERING_ITEM_RENDERER_LIBRARY_HPP

#include <string>
#include <unordered_map>

#include "shapes/shape.hpp"

namespace rendering {

class ShapeLibrary {
public:
    ShapeLibrary();
    IShapePtr getShape(model::ItemBasePtr);

private:
    std::unordered_map<std::string, IShapePtr> lib_;
}; // class ShapeLibrary

} // namespace rendering

#endif // COURSE_PROJECT_SRC_RENDERING_ITEM_RENDERER_LIBRARY_HPP