#ifndef PARSER_SRC_COMMAND_PARSER_TOKENIZER_HPP
#define PARSER_SRC_COMMAND_PARSER_TOKENIZER_HPP

#include <istream>
#include <string>
#include <vector>

using Tokens = std::vector<std::string>;

class Tokenizer {
public:
    Tokens tokenize(const std::string);
}; // class Tokenizer

#endif // PARSER_SRC_COMMAND_PARSER_TOKENIZER_HPP