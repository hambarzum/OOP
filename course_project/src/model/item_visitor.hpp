#ifndef MODEL_ITEM_VISITOR_HPP
#define MODEL_ITEM_VISITOR_HPP

#include <memory> // std::shared_ptr

namespace model {

class Item;
class ItemGroup;

class ItemVisitor {
public:
    virtual void visitItem(Item&) = 0;
    virtual void visitGroup(ItemGroup&) = 0;

    virtual ~ItemVisitor() = default;
}; // class ItemVisitor

using ItemVisitorPtr = std::shared_ptr<ItemVisitor>;

} // namespace model

#endif // MODEL_ITEM_VISITOR_HPP