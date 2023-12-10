#ifndef MODEL_ITEMS_ITEM_TYPE_LIBRARY_HPP
#define MODEL_ITEMS_ITEM_TYPE_LIBRARY_HPP

#include <string>
#include <unordered_map>

namespace model {

// TK: Don't mix Shape & Item types, Rectangle, Elipse are Shape types, Item has shape type, but Item type is either Group or Leaf
enum class ItemType {
    /// TODO: add rhombus shape to see how easily-extendible the code is
    RECTANGLE,
    ELIPSE,
    GROUP
}; // enum class ItemType

// This is not item but Shape library and it is part of rendering
class ItemTypeLibrary {
public:
    // TK: What is purpose of the argument, do not skip local variable names in header files
    static ItemType getType(const std::string&);

private:
    static std::unordered_map<std::string, ItemType> library_;
}; // class ItemTypeLibrary

} // namespace model

#endif // MODEL_ITEMS_ITEM_TYPE_LIBRARY_HPP