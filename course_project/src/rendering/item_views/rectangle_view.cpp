#include "rectangle_view.hpp"

namespace rendering {

void RectangleView::render(IRendererPtr formatter) const {
    formatter->renderRect(item_);
}

ItemViewPtr RectangleView::clone() const {
    return std::make_unique<RectangleView>(*this);
}

} // namespace rendering