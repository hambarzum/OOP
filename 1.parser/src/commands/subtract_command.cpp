#include "subtract_command.hpp"

double SubtractCommand::execute(const Arguments& args) {
    return args.at(0) - args.at(1);
}