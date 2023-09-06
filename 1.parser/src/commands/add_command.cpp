#include "add_command.hpp"

#include <numeric>

void AddCommand::setArguments(std::list<double> args) {
    arguments_ = args;
}

double AddCommand::execute() {
    return std::accumulate(arguments_.begin(), arguments_.end(), 0.0, std::plus<double>());
}