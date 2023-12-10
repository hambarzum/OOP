#include "../../application.hpp"
#include "../../rendering/item_views/item_view.hpp"
#include "../../rendering/renderers/renderer.hpp"
#include "display_command.hpp"

namespace cli::commands {

Display::Display() {
    options_["-slide"] = 0;
    options_["-format"] = std::string{"console"};
    options_["-path"] = std::string{"slide.png"};
}

std::string Display::execute() {
    const auto slide = Application::instance().getDocument().getSlide(options_["-slide"]);
    const auto item = slide->getTopItem();
    /// TODO: map string to formatter
    // TK: too long
    rendering::IRendererPtr renderer = Application::instance().getRendererLibrary().findRenderer(options_["-format"]);
    // TK: too long
    // TK: you shouldn't create any item in the display command
    rendering::ItemViewPtr view = Application::instance().getItemViewLibrary().getView(std::make_shared<model::ItemGroup>(item));
    // TK: Doesn't looks correct, you  shouldn't move anything here
    view->render(std::move(renderer));

    return "Display executed successfully\n";
}

CommandPtr Display::clone() {
    return std::make_unique<Display>(*this);
}

} // namespace cli::commands