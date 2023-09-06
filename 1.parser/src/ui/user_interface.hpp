#ifndef PARSER_SRC_UI_USER_INTERFACE_HPP
#define PARSER_SRC_UI_USER_INTERFACE_HPP

#include <string>

class IUserInterface {
public:
    virtual std::string getInput() = 0;
    virtual void displayOutput(double result) = 0;
    virtual void displayMessage(const std::string& msg) = 0;
    virtual ~IUserInterface() {}
}; // class UserInterface

#endif // PARSER_SRC_UI_USER_INTERFACE_HPP