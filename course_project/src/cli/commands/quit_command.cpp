#include "quit_command.hpp"

namespace cli {

std::string QuitCommand::execute() {
    /// TODO: implement without std::exit(0)
    std::exit(0);
    
}

ICommandPtr QuitCommand::clone() {
    return std::make_unique<QuitCommand>(*this);
}

}