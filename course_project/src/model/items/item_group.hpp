#ifndef COURSE_PROJECT_MODEL_ITEMS_ITEM_GROUP_HPP
#define COURSE_PROJECT_MODEL_ITEMS_ITEM_GROUP_HPP

#include <memory> // std::shared_ptr
#include <vector>

#include "item.hpp"

namespace model {

using Items = std::vector<ItemPtr>;

class ItemGroup : public Item {
public:
    using iterator = Items::iterator;
    using const_iterator = Items::const_iterator;

    ItemGroup();
    void addItem(ItemPtr);
    void removeItem(unsigned int);

/// TODO: create proper iterator generators
public: 


private:
    Items items_;
}; // class ItemGroup

} // namespace models


#endif // COURSE_PROJECT_MODEL_ITEMS_ITEM_GROUP_HPP