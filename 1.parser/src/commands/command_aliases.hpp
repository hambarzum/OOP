#ifndef PARSER_SRC_COMMANDS_COMMAND_ALIASES_HPP
#define PARSER_SRC_COMMANDS_COMMAND_ALIASES_HPPP

#include "command.hpp"

#include <list>
#include <memory> // std::shared_ptr
#include <utility>
#include <string>
#include <unordered_map>

using ICommandPtr = std::shared_ptr<ICommand>; // shared?
using CommandRegistry = std::unordered_map<std::string, ICommandPtr>;
using CommandContent = std::pair<std::string, std::list<double>>;

#endif // PARSER_SRC_COMMANDS_COMMAND_ALIASES_HPP