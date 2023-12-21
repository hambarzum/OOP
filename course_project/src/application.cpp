#include "application.hpp"
#include "model/slide.hpp"

Application::Application() 
    : controller_{std::cin, std::cout}
{
    doc_.addSlide(std::make_shared<model::Slide>());
}

Application& Application::instance() {
    static Application instance;
    return instance;
}

void Application::run() {
    controller_.run();
}

void Application::quit() {
    controller_.endLoop();
}

void Application::help() {
    auto helpMsg = createHelpMessage();
    controller_.output(helpMsg);
}

std::string Application::createHelpMessage() {
    std::string helpMsg = 
    R"(
add_slide [-pos slide_position]
add_item [-type item_type] [-x1 top_left_x] [-y1 top_left_y] [-x2 bottom_right_x] [-y2 bottom_right_y] [-slide slide_number]
print [-slide slide_number]
help
quit)";
    
    return helpMsg;
}

logic::Director& Application::getDirector() {
    return director_;
}

model::Document& Application::getDocument() {
    return doc_;
}

rendering::ShapeLibrary& Application::getShapeLibrary() {
    return shapeLib_;
}