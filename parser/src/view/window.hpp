#ifndef PARSER_SRC_UI_USER_INTERFACE_HPP
#define PARSER_SRC_UI_USER_INTERFACE_HPP

#include <istream>
#include <string>

class Window {
public:
    std::string getInput(std::istream);
    /// TODO: take Item as argument
    void draw(); 
}; // class Window

#endif // PARSER_SRC_UI_USER_INTERFACE_HPP