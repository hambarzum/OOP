#include <iostream>

#include "add_item_action.hpp"

namespace logic {
 
namespace actions {

AddItem::AddItem(model::ItemBasePtr item, model::SlidePtr slide) 
    : item_{item}
    , slide_{slide}
{

}

void AddItem::run() {
    slide_->addItem(item_);
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

} // namespace actions

} // namespace logic