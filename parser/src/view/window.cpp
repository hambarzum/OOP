#include "window.hpp"

std::string Window::getInput(std::istream input) {
    std::string inputStr;
    std::getline(input, inputStr);
    
    return inputStr;
}