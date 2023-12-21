#ifndef COURSE_PROJECT_SRC_APPLICATION_HPP
#define COURSE_PROJECT_SRC_APPLICATION_HPP

#include <string>

#include "cli/controller/command_controller.hpp"
#include "logic/director.hpp"
#include "model/document.hpp"
#include "rendering/shape_library.hpp"

class Application {
public:
    static Application& instance();
    void run();
    void quit();
    void help();

    logic::Director& getDirector();
    model::Document& getDocument();
    rendering::ShapeLibrary& getShapeLibrary();

private:
    Application();
    std::string createHelpMessage();

private:
    logic::Director director_;
    cli::Controller controller_;
    model::Document doc_;
    rendering::ShapeLibrary shapeLib_;
}; // class Application

#endif // COURSE_PROJECT_SRC_APPLICATION_HPP