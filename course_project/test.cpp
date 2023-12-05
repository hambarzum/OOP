#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <sstream>
#include <stdexcept>
#include <variant>

#include "src/cli/commands/command.hpp"


int main() {

    cli::ICommandPtr command;
    command->execute();

}