#include "remove_command.hpp"

namespace cli {

namespace cmd {

Remove::Remove() {
    
}

std::string Remove::execute() {
    /// TODO: implement
}

CommandPtr Remove::clone() {
    return std::make_unique<Remove>(*this);
}

} // namespace cmd

} // namespace cli