#include "remove_command.hpp"

namespace cli {

std::string RemoveCommand::execute() {
    /// TODO: implement
}

CommandPtr RemoveCommand::clone() {
    return std::make_unique<RemoveCommand>(*this);
}

}