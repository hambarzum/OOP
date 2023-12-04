#ifndef COURSE_PROJECT_SRC_CLI_PARSING_TOKENIZER_HPP
#define COURSE_PROJECT_SRC_CLI_PARSING_TOKENIZER_HPP

#include <string>
#include <vector>

namespace cli {

using Tokens = std::vector<std::string>;

class Tokenizer {
public:
    Tokens tokenize(const std::string);
}; // class Tokenizer

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_PARSING_TOKENIZER_HPP