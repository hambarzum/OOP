#ifndef COURSE_PROJECT_SRC_RENDERING_RENDERING_FORMAT_RENDERERING_FORMATER_HPP
#define COURSE_PROJECT_SRC_RENDERING_RENDERING_FORMAT_RENDERERING_FORMATER_HPP

#include <memory> // std::unique_ptr

#include "../../model/items/item.hpp"

namespace rendering {

class IRenderer;
using IRendererPtr = std::unique_ptr<IRenderer>;

class IRenderer {
public:
    virtual IRendererPtr clone() = 0;
    virtual void renderRect(model::ItemPtr) = 0;
    virtual void renderElipse(model::ItemPtr) = 0;
    virtual void renderGroup(model::ItemPtr) = 0;

}; // class IRenderer

} // namespace Rendering

#endif // COURSE_PROJECT_SRC_RENDERING_RENDERING_FORMAT_RENDERERING_FORMATER_HPP