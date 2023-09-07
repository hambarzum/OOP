#ifndef PARSER_SRC_COMMANDS_COMMAND_ALIASES_HPP
#define PARSER_SRC_COMMANDS_COMMAND_ALIASES_HPPP

#include "command.hpp"

#include <memory> // std::shared_ptr
#include <string>
#include <unordered_map>
#include <utility> // std::pair

using ICommandPtr = std::shared_ptr<ICommand>; // shared?
using CommandRegistry = std::unordered_map<std::string, ICommandPtr>;
using CommandContent = std::pair<std::string, Arguments>;

#endif // PARSER_SRC_COMMANDS_COMMAND_ALIASES_HPP