#include <stdexcept> // std::runtime_error

#include "add_command.hpp"

namespace cli {

AddCommand::AddCommand() {
    options_["-item"] = std::string{};
    options_["-posX"] = 0;
    options_["-posY"] = 0;
    options_["-w"] = 0;
    options_["-h"] = 0;
}

std::string AddCommand::execute() {
    /// TODO: implement

    return options_["-item"] + "added successfully.";
}

ICommandPtr AddCommand::clone() {
    return std::make_unique<AddCommand>(*this);
}

} // namespace cli