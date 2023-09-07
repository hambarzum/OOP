#include "add_command.hpp"

#include <numeric>

double AddCommand::execute(const Arguments& args) {
    return std::accumulate(args.begin(), args.end(), 0.0, std::plus<double>());
}