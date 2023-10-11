// #include <sstream> // std::istringstream

#include "command_parser.hpp"

ICommandPtr CommandParser::parse(std::istream& input) { 
    buildCommand(input); // implement command builder??

    const auto tokens = tokenizer_.tokenize(input);
    
    // create command with prototype depending on the input

    // 
}