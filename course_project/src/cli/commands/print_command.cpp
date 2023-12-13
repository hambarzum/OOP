#include "../../application.hpp"
#include "../../rendering/renderers/console_renderer.hpp"
#include "print_command.hpp"

namespace cli::cmd {

Print::Print() {
    options_["-slide"] = 0;
}

std::string Print::execute() {
    const auto doc =  Application::instance().getDocument();
    const auto slide = doc.getSlide(options_["-slide"]);

    rendering::ConsoleRenderer renderer;
    renderer.render(slide);

    return "Display executed successfully\n";
}

CommandPtr Print::clone() {
    return std::make_unique<Print>(*this);
}

} // namespace cli::cmd