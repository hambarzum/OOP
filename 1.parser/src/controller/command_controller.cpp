#include "command_controller.hpp"

#include "../commands/command_factory.hpp"
#include "../commands/add_command.hpp"
#include "../commands/multiply_command.hpp"
#include "../commands/subtract_command.hpp"
#include "../commands/divide_command.hpp"
#include "../commands/quit_command.hpp"

#include <stdexcept> // std::runtime_error

CommandController::CommandController(IUserInterfacePtr ui, ICommandParserPtr parser)
    : ui_{std::move(ui)}
    , parser_{std::move(parser)}
{
    registerCommands();
}

void CommandController::registerCommands() {
    registry_["add"] = std::make_shared<AddCommand>();
    registry_["mul"] = std::make_shared<MultiplyCommand>();
    registry_["sub"] = std::make_shared<SubtractCommand>();
    registry_["div"] = std::make_shared<DivideCommand>();
    registry_["quit"] = std::make_shared<QuitCommand>();
}

void CommandController::exec() {
    while(true) {
        try {
            run();
        } catch(const std::runtime_error& e) {
            ui_->displayMessage(e.what());
        }
    }
}

void CommandController::run() {
    while(true) {
        /// TODO: get the input through a stream?
        const auto input = ui_->getInput();
        const auto result = handleInput(input);
        ui_->displayOutput(result);
    }
}

double CommandController::handleInput(const std::string& input) {
    const auto commandContent = parser_->parse(input);
    const auto command = CommandFactory::makeCommand(commandContent, registry_);
    const auto result = invokeCommand(command, commandContent.second);
    return result;
}

double CommandController::invokeCommand(ICommandPtr cmd, const Arguments& args) {
    return cmd->execute(args);
}