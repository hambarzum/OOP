#include "quit_command.hpp"

namespace cli {

std::string QuitCommand::execute() {
    /// TODO: implement without std::exit(0)
    std::exit(0);

}

void QuitCommand::addOption(const OptionRegistry::value_type& option) {
    // no-op method, quit doesn't support any options
}

ICommandPtr QuitCommand::clone() {
    return std::make_unique<QuitCommand>(*this);
}

}