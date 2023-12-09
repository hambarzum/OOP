#include <stdexcept> // std::runtime_error

#include "item_type_library.hpp"

namespace model {

std::unordered_map<std::string, ItemType> ItemTypeLibrary::library_ = {
    {"Rect", ItemType::RECTANGLE},
    {"Elipse", ItemType::ELIPSE},
    {"Group", ItemType::GROUP}
};

ItemType ItemTypeLibrary::getType(const std::string& typeName) {
    const auto iter = library_.find(typeName);

    if(iter == library_.end()) {
        throw std::runtime_error("Uknown type: [" + typeName + "]\n");
    }

    return iter->second;
}

} // namespace model