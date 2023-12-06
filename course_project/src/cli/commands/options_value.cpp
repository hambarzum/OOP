#include "options_value.hpp"

namespace cli {

Value::Value(double doubleVal)
    : value_{doubleVal}
{

}

Value::Value(int intVal) 
    : value_{intVal}
{

}

Value::Value(const std::string& stringVal)
    : value_{stringVal}
{

}

ValueType Value::getType() const {
    return static_cast<ValueType>(value_.index());
}

Value::operator double() const {
    return std::get<double>(value_);
}

Value::operator int() const {
    return std::get<int>(value_);
}

Value::operator std::string() const {
    return std::get<std::string>(value_);
}

} // namespace cli