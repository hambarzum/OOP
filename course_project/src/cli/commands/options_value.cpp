#include "options_value.hpp"

namespace cli {

Value::Value(double doubleVal)
    : value_{doubleVal}
{

}

Value::Value(const std::string& stringVal)
    : value_{stringVal}
{

}

Value::operator std::string() const {
    return std::get<std::string>(value_);
}


Value::operator double() const {
    return std::get<double>(value_);
}


} // namespace cli