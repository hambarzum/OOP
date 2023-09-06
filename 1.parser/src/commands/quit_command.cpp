#include "quit_command.hpp"

#include <cstdlib>

double QuitCommand::execute() {
    std::exit(0);
}