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

logic::Director& Application::getDirector() {
    return director_;
}

model::Document& Application::getDocument() {
    return doc_;
}

rendering::ItemViewLibrary& Application::getItemViewLibrary() {
    return itemViewLib_;
}

rendering::RendererLibrary& Application::getRendererLibrary() {
    return rendererLib_;
}