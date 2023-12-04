#include "remove_command.hpp"

namespace cli {

std::string RemoveCommand::execute() {
    /// TODO: implement
}

ICommandPtr RemoveCommand::clone() {
    return std::make_unique<RemoveCommand>(*this);
}

}