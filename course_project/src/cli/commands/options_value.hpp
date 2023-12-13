#ifndef COURSE_PROJECT_SRC_CLI_COMMANDS_OPTIONS_VALUE_HPP
#define COURSE_PROJECT_SRC_CLI_COMMANDS_OPTIONS_VALUE_HPP

#include <string>
#include <variant>

namespace cli {

enum class ValueType : int {
    DOUBLE = 0,
    INT = 1,
    STRING = 2
}; // enum class ValueType

class Value {
public:
    Value() = default;
    Value(double);
    Value(int);
    Value(const std::string&);

    ValueType getType() const;

public: // conversion operators
    operator double() const;
    operator int() const;
    operator std::string() const;

private:
    std::variant<double, int, std::string> value_;
}; // class Value

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_COMMANDS_OPTIONS_VALUE_HPP