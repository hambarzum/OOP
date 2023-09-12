#include "divide_command.hpp"

double DivideCommand::execute(const Arguments& args) {
    return args[0] / args[1];
}