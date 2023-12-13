#ifndef COURSE_PROJECT_MODEL_ITEMS_ITEM_GROUP_HPP
#define COURSE_PROJECT_MODEL_ITEMS_ITEM_GROUP_HPP

#include <memory> // std::shared_ptr
#include <vector>

#include "item_base.hpp"

namespace model {

using Items = std::vector<ItemBasePtr>;

class ItemGroup : public ItemBase {
public:
    using iterator = Items::iterator;
    using const_iterator = Items::const_iterator;

    ItemGroup();

    void setShapeType(const std::string& type) override;
    void setGeometry(const Geometry& geom) override;
    void setStyleAttributes(const attributes::StyleAttributes& style) override;

    void addItem(ItemBasePtr);
    /// TODO: void removeItem(int);
    int size() const;
    bool empty() const;
    ItemBasePtr operator[](int pos);
    const ItemBasePtr operator[](int pos) const;

public: 
    iterator begin();
    iterator end();

    const_iterator begin() const;
    const_iterator end() const;
    
    const_iterator cbegin() const;
    const_iterator cend() const;

private:
    Items items_;
}; // class ItemGroup

} // namespace models


#endif // COURSE_PROJECT_MODEL_ITEMS_ITEM_GROUP_HPP