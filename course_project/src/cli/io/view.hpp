#ifndef COURSE_PROJECT_SRC_CLI_IO_VIEW_HPP
#define COURSE_PROJECT_SRC_CLI_IO_VIEW_HPP

#include "view.hpp"

namespace cli {

class View {
public:
    View(std::istream&, std::ostream&);
    std::string getInput();
    void displayOutput(const std::string& msg);

private:
    std::istream& input_;
    std::ostream& output_;
}; // class View

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_IO_VIEW_HPP