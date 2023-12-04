#ifndef COURSE_PROJECT_SRC_CLI_COMMANDS_OPTIONS_VALUE_HPP
#define COURSE_PROJECT_SRC_CLI_COMMANDS_OPTIONS_VALUE_HPP

#include <string>
#include <variant>

namespace cli {

class Value {
public:
    Value(double);
    Value(const std::string&);
    operator std::string() const;
    operator double() const;

private:
    std::variant<double, std::string> value_;
}; // class Value

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_COMMANDS_OPTIONS_VALUE_HPP