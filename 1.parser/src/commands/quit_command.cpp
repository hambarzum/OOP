#include "quit_command.hpp"

#include <cstdlib>

double QuitCommand::execute(const Arguments& args) {
    std::exit(0);
}