#include "application.hpp"

Application& Application::instance() {
    static Application instance;
    return instance;
}