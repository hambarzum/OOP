#ifndef COURSE_PROJECT_SRC_CLI_COMMANDS_OPTIONS_VALUE_HPP
#define COURSE_PROJECT_SRC_CLI_COMMANDS_OPTIONS_VALUE_HPP

#include <string>
#include <variant>

#include "../../model/items/item_attributes/bounding_box.hpp"

namespace cli {

class Value {
public:
    Value() = default;
    Value(const model::Position&);
    Value(const std::string&);
    operator std::string() const;
    operator model::Position() const;

private:
    std::variant<model::Position, std::string> value_;
}; // class Value

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_COMMANDS_OPTIONS_VALUE_HPP