#include <iostream> // std::cout, std::endl

#include "../../application.hpp"
#include "../../model/items/item.hpp"
#include "../textual_displayable.hpp"
#include "console_renderer.hpp"

namespace rendering {

void ConsoleRenderer::render(model::SlidePtr slide) {
    auto topItem = slide->getTopItem();
    auto shape = Application::instance().getShapeLibrary().getShape(std::make_shared<model::ItemGroup>(topItem));

    auto displayableShape = dynamic_cast<ITextualDisplayable*>(shape.get());
    displayableShape->print();
}

} // namespace rendering