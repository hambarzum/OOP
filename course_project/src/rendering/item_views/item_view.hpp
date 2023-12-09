#ifndef COURSE_PROJECT_SRC_RENDERING_ITEM_RENDERERS_ITEM_RENDERER_HPP
#define COURSE_PROJECT_SRC_RENDERING_ITEM_RENDERERS_ITEM_RENDERER_HPP

#include <memory> // std::unique_ptr

#include "../renderers/renderer.hpp"

namespace rendering {

class ItemView;
using ItemViewPtr = std::unique_ptr<ItemView>;

class ItemView {
public:
    virtual void setItem(model::ItemPtr item) { item_ = item; };
    virtual void render(IRendererPtr) const = 0;
    virtual ItemViewPtr clone() const = 0;

protected:
    model::ItemPtr item_;
}; // class ItemView

} // namespace rendering

#endif // COURSE_PROJECT_SRC_RENDERING_ITEM_RENDERERS_ITEM_RENDERER_HPP