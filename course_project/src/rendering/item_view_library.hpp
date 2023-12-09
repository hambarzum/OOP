#ifndef COURSE_PROJECT_SRC_RENDERING_ITEM_RENDERER_LIBRARY_HPP
#define COURSE_PROJECT_SRC_RENDERING_ITEM_RENDERER_LIBRARY_HPP

#include <unordered_map>

#include "../model/items/item.hpp"
#include "item_views/item_view.hpp"

namespace rendering {

class ItemViewLibrary {
public:
    ItemViewLibrary();
    ItemViewPtr getView(model::ItemPtr);

private:
    std::unordered_map<model::ItemType, ItemViewPtr> library_;
}; // class ItemViewLibrary

} // namespace rendering

#endif // COURSE_PROJECT_SRC_RENDERING_ITEM_RENDERER_LIBRARY_HPP