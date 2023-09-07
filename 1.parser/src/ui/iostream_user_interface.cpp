#include "iostream_user_interface.hpp"

#include <iostream>

std::string IOStreamUserInterface::getInput() {
    std::cout << "> ";
    
    std::string input;
    std::getline(std::cin, input);
    return input;
}

void IOStreamUserInterface::displayOutput(double result) {
    std::cout << "Result: " << result << std::endl;
}

void IOStreamUserInterface::displayMessage(const std::string& msg) {
    std::cout << msg << std::endl;
}