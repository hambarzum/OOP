#include "quit_command.hpp"

#include <cstdlib>

std::string QuitCommand::execute() {
    std::exit(0);
}