#ifndef COURSE_PROJECT_SRC_RENDERING_RENDERING_FORMAT_RENDERERING_FORMATER_HPP
#define COURSE_PROJECT_SRC_RENDERING_RENDERING_FORMAT_RENDERERING_FORMATER_HPP

#include <memory> // std::unique_ptr

#include "../../model/items/item_base.hpp"
#include "../../model/item_visitor.hpp"
#include "../../model/slide.hpp"

namespace rendering {

class IRenderer : public model::ItemVisitor {
public:
    virtual void render(model::SlidePtr) = 0;
    virtual void render(model::ItemBasePtr) = 0;
}; // class IRenderer

} // namespace Rendering

#endif // COURSE_PROJECT_SRC_RENDERING_RENDERING_FORMAT_RENDERERING_FORMATER_HPP