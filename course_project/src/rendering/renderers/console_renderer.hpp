#ifndef COURSE_PROJECT_SRC_RENDERING_RENDERING_FORMAT_CONSOLE_FORMATTER_HPP
#define COURSE_PROJECT_SRC_RENDERING_RENDERING_FORMAT_CONSOLE_FORMATTER_HPP

#include "renderer.hpp"

namespace rendering {

class ConsoleRenderer : public IRenderer {
public:
    IRendererPtr clone() override; // TK: I am not sure if you need clone for the renderer
    void renderRect(model::ItemPtr) override; // Is this Visitor pattern? You are using ItemView concept why you need such functions?
    void renderElipse(model::ItemPtr) override;
    // renderGroup you need!, iteration by children of Group items should be done by renderer
    // In fact you need vistor pattern for Item & ItemGroup only, but ItemViews will be organized differently   
    void renderGroup(model::ItemPtr) override;  
}; // class ConsoleRenderer

} // namespace rendering

#endif // COURSE_PROJECT_SRC_RENDERING_RENDERING_FORMAT_CONSOLE_FORMATTER_HPP