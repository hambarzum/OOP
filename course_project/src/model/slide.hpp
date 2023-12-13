#ifndef COURSE_PROJECT_SRC_MODEL_SLIDE_HPP
#define COURSE_PROJECT_SRC_MODEL_SLIDE_HPP

#include <memory> // std::shared_ptr
#include <vector>

#include "items/item.hpp"
#include "items/item_group.hpp"

namespace model {

class Slide {
public:
    using iterator = ItemGroup::iterator;
    using const_iterator = ItemGroup::const_iterator;

public:
    Slide(); 
    void addItem(ItemBasePtr item);
    /// TODO: ItemPtr removeItem(ItemID id);
    ItemBasePtr getItem(ItemID id) const;
    ItemGroup getTopItem() const;
    int size() const;

public: // iterator generators
    iterator begin();
    iterator end();

    const_iterator begin() const;
    const_iterator end() const;
    
    const_iterator cbegin() const;
    const_iterator cend() const;

private:
    /// TODO: use topItem_ id as slide id?
    ItemGroup topItem_;
}; // class Item

using SlidePtr = std::shared_ptr<Slide>;

} // naemspace model

#endif // COURSE_PROJECT_SRC_MODEL_SLIDE_HPP