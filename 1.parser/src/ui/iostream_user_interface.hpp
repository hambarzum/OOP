#ifndef PARSER_SRC_UI_IOSTREAM_USER_INTERFACE_HPP
#define PARSER_SRC_UI_IOSTREAM_USER_INTERFACE_HPP

#include "user_interface.hpp"

class IOStreamUserInterface : public IUserInterface {
public:
    std::string getInput() override;
    void displayOutput(double result) override;
    void displayMessage(const std::string& msg) override;
}; // IOStreamUserInterface

#endif // PARSER_SRC_UI_IOSTREAM_USER_INTERFACE_HPP