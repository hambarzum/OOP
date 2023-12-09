#include "item_view_library.hpp"
#include "item_views/group_view.hpp"
#include "item_views/rectangle_view.hpp"

namespace rendering {

ItemViewLibrary::ItemViewLibrary() {
    library_[model::ItemType::RECTANGLE] = std::make_unique<RectangleView>();
    /// TODO: add ElipseView
    library_[model::ItemType::GROUP] = std::make_unique<GroupView>();
}

ItemViewPtr ItemViewLibrary::getView(model::ItemPtr item) {
    const auto iter = library_.find(item->getType());

    iter->second->setItem(item);

    return iter->second->clone();
}

} // namespace rendering