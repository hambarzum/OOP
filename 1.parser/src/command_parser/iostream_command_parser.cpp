#include "iostream_command_parser.hpp"

#include <sstream> // std::istringstream

CommandContent IOStreamCommandParser::parse(const std::string& input) { 
    /// TODO: get input by stream
    
    // ..parse the command
    // parseCommand();

    // ..parse the options and arguments
    // parseOptionsAndArguments();

    /// TODO: seperate into own functions
    std::string commandName;
    std::istringstream iss{input};
    iss >> commandName;
    double arg;
    Arguments args;
    while (iss >> arg) {
        args.push_back(arg);
    }

    return {commandName, args};
}

std::string IOStreamCommandParser::parseCommand() {

}

Arguments IOStreamCommandParser::parseOptionsAndArguments() {

}