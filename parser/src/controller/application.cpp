#include "application.hpp"

#include "../commands/add_command.hpp"
#include "../commands/quit_command.hpp"

// #include <stdexcept> // std::runtime_error

Application::Application(const std::istream& input) {
    /// TODO: implement
}

void Application::exec() {
    while(true) {
        const auto input = view_.getInput();   
        /// TODO: control life cycle 
    }
}

void Application::run() {
    while(true) {
        const auto input = ui_->getInput();
        const auto result = handleInput(input);
        ui_->displayOutput(result);
    }
}

double Application::handleInput(const std::string& input) {
    const auto commandContent = parser_->parse(input)`;
    const auto result = invokeCommand(command, commandContent.second);
    return result;
}

double Application::invokeCommand(ICommandPtr cmd, const Arguments& args) {
    return cmd->execute();
}