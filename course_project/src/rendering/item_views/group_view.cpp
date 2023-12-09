#include "group_view.hpp"

namespace rendering {

void GroupView::render(IRendererPtr renderer) const {
    renderer->renderGroup(item_);
}

ItemViewPtr GroupView::clone() const {
    return std::make_unique<GroupView>(*this);
}

} // namespace rendering