#include "item_base.hpp"

namespace model {

ItemBase::ItemBase() {
    static unsigned int id = 0;
    id_ = id++;
}

} // namespace model