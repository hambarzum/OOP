#ifndef PARSER_SRC_CONTROLLER_COMMAND_CONTROLLER_HPP
#define PARSER_SRC_CONTROLLER_COMMAND_CONTROLLER_HPP

#include "../commands/command_aliases.hpp"

#include "../command_parser/command_parser.hpp"
#include "../ui/user_interface.hpp"

#include <memory> // std::unique_ptr
#include <string>

class CommandController {
    using IUserInterfacePtr = std::unique_ptr<IUserInterface>;
    using ICommandParserPtr = std::unique_ptr<ICommandParser>;
    
public:
    CommandController(IUserInterfacePtr ui, ICommandParserPtr parser);
    void exec();

private:
    void registerCommands();
    void run();
    double invokeCommand(ICommandPtr, const Arguments&);
    double handleInput(const std::string& input);

private:
    IUserInterfacePtr ui_;
    ICommandParserPtr parser_;
    CommandRegistry registry_;
}; // class CommandController

#endif // PARSER_SRC_CONTROLLER_COMMAND_CONTROLLER_HPP