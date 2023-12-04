#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <sstream>
#include <stdexcept>
#include <variant>

#include "src/cli/parsing/tokenizer.hpp"


int main() {

    std::variant<int, std::string> var;
    var = "hello";
    int result = std::visit([](const auto& val) { return val; }, var);
    std::cout << typeid(result).name() << std::endl;
}