#ifndef PARSER_SRC_CONTROLLER_COMMAND_CONTROLLER_HPP
#define PARSER_SRC_CONTROLLER_COMMAND_CONTROLLER_HPP

#include <string>

#include "../command_parser/command_parser.hpp"
#include "../commands/command.hpp"
#include "../view/window.hpp"

class Application {
public:
    Application(const std::istream&);
    void exec();

private:
    void registerCommands();
    void run();
    double invokeCommand(ICommandPtr);
    double handleInput(const std::string& input);

private:
    Window view_;
    CommandParser parser_;
}; // class Application

#endif // PARSER_SRC_CONTROLLER_COMMAND_CONTROLLER_HPP