#include <any>
#include <iostream>
#include <memory> // std::unique_ptr
#include <sstream>

#include "controller/application.hpp"
#include "view/window.hpp" 
#include "command_parser/command_parser.hpp" 

int main() {
    Application app{std::cin};
    app.exec();


}