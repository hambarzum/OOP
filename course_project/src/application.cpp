#include "application.hpp"

Application::Application() 
    : controller_{std::cin, std::cout}
{

}

Application& Application::instance() {
    static Application instance;
    return instance;
}

void Application::run() {
    controller_.run();
}