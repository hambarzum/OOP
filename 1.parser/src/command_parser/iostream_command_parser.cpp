#include "iostream_command_parser.hpp"

#include <sstream> // std::istringstream
#include <stdexcept> // std::runtime_error

CommandContent IOStreamCommandParser::parse(const std::string& input) { 
    /// TODO: get input by stream
    
    // ..figure out the command

    // ..figure out the arguments

    // ..find the command
    

    // ..if found create and return the correct command with corresponding arguments 

    std::string commandName;
    std::istringstream iss{input};
    iss >> commandName;
    double arg;
    std::list<double> args;
    while (iss >> arg) {
        args.push_back(arg);
    }

    return {commandName, args};
}