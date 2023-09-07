#include "multiply_command.hpp"

#include <numeric>

double MultiplyCommand::execute(const Arguments& args) {
    return std::accumulate(args.begin(), args.end(), 1, std::multiplies<double>());
}