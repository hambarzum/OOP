#include "command_controller.hpp"

#include <stdexcept> // std::runtime_error
#include <list>

CommandController::CommandController(IUserInterfacePtr ui, ICommandParserPtr parser)
    : ui_{std::move(ui)}
    , parser_{std::move(parser)}
{

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
    /// TODO: handle quit command and wrong commands
    while(true) {
        const auto input = ui_->getInput();
        const auto result = handleInput(input);
        ui_->displayOutput(result);
    }
}

double CommandController::handleInput(const std::string& input) {
    const auto commandContent = parser_->parse(input);
    const auto command = CommandFactory::makeCommand(commandContent);
    const auto result = invokeCommand(command);
    return result;
}

double CommandController::invokeCommand(ICommandPtr cmd) {
    return cmd->execute();
}