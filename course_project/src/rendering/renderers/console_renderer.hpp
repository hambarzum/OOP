#ifndef COURSE_PROJECT_SRC_RENDERING_RENDERING_FORMAT_CONSOLE_FORMATTER_HPP
#define COURSE_PROJECT_SRC_RENDERING_RENDERING_FORMAT_CONSOLE_FORMATTER_HPP

#include "renderer.hpp"

namespace rendering {

class ConsoleRenderer : public IRenderer {
public:
    IRendererPtr clone() override;
    void renderRect(model::ItemPtr) override;
    void renderElipse(model::ItemPtr) override;
    void renderGroup(model::ItemPtr) override;
}; // class ConsoleRenderer

} // namespace rendering

#endif // COURSE_PROJECT_SRC_RENDERING_RENDERING_FORMAT_CONSOLE_FORMATTER_HPP