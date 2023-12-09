#include "remove_command.hpp"

namespace cli {

namespace commands {

std::string Remove::execute() {
    /// TODO: implement
}

CommandPtr Remove::clone() {
    return std::make_unique<Remove>(*this);
}

} // namespace commands

} // namespace cli