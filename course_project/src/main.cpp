#include <any>
#include <iostream>
#include <memory> // std::unique_ptr
#include <sstream>

#include "application.hpp"

int main() { // TK: pls add command line args to allow user pass commands in text file as a script
    Application::instance().run();
}