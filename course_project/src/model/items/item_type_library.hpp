#ifndef MODEL_ITEMS_ITEM_TYPE_LIBRARY_HPP
#define MODEL_ITEMS_ITEM_TYPE_LIBRARY_HPP

#include <string>
#include <unordered_map>

namespace model {

enum class ItemType {
    /// TODO: add rhombus shape to see how easily-extendible the code is
    RECTANGLE,
    ELIPSE,
    GROUP
}; // enum class ItemType

class ItemTypeLibrary {
public:
    static ItemType getType(const std::string&);

private:
    static std::unordered_map<std::string, ItemType> library_;
}; // class ItemTypeLibrary

} // namespace model

#endif // MODEL_ITEMS_ITEM_TYPE_LIBRARY_HPP