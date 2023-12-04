#include "quit_command.hpp"

namespace cli {

std::string QuitCommand::execute() {
    /// TODO: implement (not with std::exit(0))
}

ICommandPtr QuitCommand::clone() {
    return std::make_unique<QuitCommand>(*this);
}

}