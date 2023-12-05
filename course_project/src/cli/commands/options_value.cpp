#include "options_value.hpp"

namespace cli {

Value::Value(const model::Position& posVal)
    : value_{posVal}
{

}

Value::Value(const std::string& stringVal)
    : value_{stringVal}
{

}

Value::operator std::string() const {
    return std::get<std::string>(value_);
}

Value::operator model::Position() const {
    return std::get<model::Position>(value_);
}

} // namespace cli