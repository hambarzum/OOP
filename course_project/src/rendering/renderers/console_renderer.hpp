#ifndef COURSE_PROJECT_SRC_RENDERING_RENDERING_FORMAT_CONSOLE_FORMATTER_HPP
#define COURSE_PROJECT_SRC_RENDERING_RENDERING_FORMAT_CONSOLE_FORMATTER_HPP

#include "renderer.hpp"

namespace rendering {

class ConsoleRenderer : public IRenderer {
public:
    void render(model::SlidePtr) override;
    void render(model::ItemBasePtr) override;
    void visitItem(model::Item&) override;
    void visitGroup(model::ItemGroup&) override;
}; // class ConsoleRenderer

} // namespace rendering

#endif // COURSE_PROJECT_SRC_RENDERING_RENDERING_FORMAT_CONSOLE_FORMATTER_HPP