#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <sstream>
#include <stdexcept>
#include <variant>
#include <iomanip>

#include "src/cli/commands/command.hpp"
#include "src/logic/director.hpp"
#include "src/logic/actions/add_item_action.hpp"
#include "src/application.hpp"

enum class ValueType : int {
    DOUBLE,
    INT,
    STRING
}; // enum class ValueType

int main() {

    ValueType val = static_cast<ValueType>(1);
    switch(val) {
        case ValueType::INT:
            int temp;
            std::cout << "yes" << std::endl;
            std::cout << "yes2" << std::endl;
            break;
        case ValueType::DOUBLE:
            double temp;
            std::cout << "yes" << std::endl;
            std::cout << "yes2" << std::endl;
            break;
    }

    return 0;
}