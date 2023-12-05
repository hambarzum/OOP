#include "director.hpp"

namespace logic {

void Director::doAction(IActionPtr action) {
    /// TODO: add action to undo/redo stack
    action->run();
}

} // namespace logic