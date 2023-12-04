#include <iterator> // std::istream_iterator
#include <sstream> // std::istringstream

#include "tokenizer.hpp"

namespace cli {

Tokens Tokenizer::tokenize(const std::string input) {
    std::istringstream inStream(input);

    return Tokens{std::istream_iterator<std::string>{inStream} , {}};
}

} // namespace cli