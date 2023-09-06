#include "multiply_command.hpp"

#include <numeric>

void MultiplyCommand::setArguments(std::list<double> args) {
    arguments_ = args;
}

double MultiplyCommand::execute() {
    return std::accumulate(arguments_.begin(), arguments_.end(), 1.0 , std::multiplies<double>());
}