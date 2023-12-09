#include "quit_command.hpp"

namespace cli {

namespace commands {

std::string Quit::execute() {
    /// TODO: implement without std::exit(0)
    std::exit(0);

}

CommandPtr Quit::clone() {
    return std::make_unique<Quit>(*this);
}

} // namespace commands

}