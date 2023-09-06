#include "command_factory.hpp"

#include <stdexcept>

CommandRegistry CommandFactory::registry_ = {
    {"add", std::make_shared<AddCommand>()},
    {"mul", std::make_shared<MultiplyCommand>()},
    {"quit", std::make_shared<QuitCommand>()}
};

ICommandPtr CommandFactory::makeCommand(CommandContent content) {
    const auto iter = registry_.find(content.first); // later replace input with the first token of input(the command)
    if(iter == registry_.end()) {
        throw std::runtime_error("Invalid Command. Try again..");
    }

    /* if(content.second.size() < 2) {
        throw std::runtime_error("Too few arguments for command '" + content.first + "'. Try again..");
    } */

    auto command = iter->second;
    command->setArguments(content.second);
    
    if(!command->hasEnoughArguments()) {
        throw std::runtime_error("Too few arguments for command '" + content.first + "'. Try again..");
    }

    return command;
}