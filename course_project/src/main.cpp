#include <any>
#include <iostream>
#include <memory> // std::unique_ptr
#include <sstream>

#include "application.hpp"

int main() {
    Application::instance().run();
}