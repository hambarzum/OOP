#include <stdexcept> // std::runtime_error

#include "../items/item.hpp"
#include "add_command.hpp"

AddCommand::AddCommand() {
    arguments_["-pos"] =  Position{0, 0};
    /// TODO: add all options
}

std::string AddCommand::execute() {
    /// TODO: add the given item to ItemStorage(Document/Slide)

    return "Add command executed successfully.";
}

void AddCommand::setArgument(const Argument& arg) {
    const auto iter = arguments_.find(arg.first);

    if(iter == arguments_.end()) {
        throw std::runtime_error("Invalid argument for command");
    }

    arguments_[iter->first] = arg.second;
}

ICommandPtr AddCommand::clone() {
    return std::make_unique<AddCommand>(*this);
}