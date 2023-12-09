#ifndef COURSE_PROJECT_SRC_APPLICATION_HPP
#define COURSE_PROJECT_SRC_APPLICATION_HPP

#include "cli/controller/command_controller.hpp"
#include "logic/director.hpp"
#include "model/document.hpp"
#include "rendering/item_view_library.hpp"
#include "rendering/renderers/renderer_library.hpp"

class Application {
public:
    static Application& instance();
    void run();

    logic::Director& getDirector();
    model::Document& getDocument();
    rendering::ItemViewLibrary& getItemViewLibrary();
    rendering::RendererLibrary& getRendererLibrary();

private:
    Application();

private:
    logic::Director director_;
    cli::Controller controller_;
    model::Document doc_;
    rendering::ItemViewLibrary itemViewLib_;
    rendering::RendererLibrary rendererLib_;
}; // class Application

#endif // COURSE_PROJECT_SRC_APPLICATION_HPP