#include <any>
#include <iostream>
#include <memory> // std::unique_ptr
#include <sstream>

#include "cli/controller/command_controller.hpp"
#include "cli/io/view.hpp"  

int main() {
    cli::View consoleView{std::cin, std::cout};
    cli::Controller controller{consoleView};
    controller.run();

}