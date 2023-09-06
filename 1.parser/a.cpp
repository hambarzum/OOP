#include <iostream>
#include <sstream>
#include <vector>
#include <stdexcept>
#include <map>
#include <functional>

class Command {
public:
    virtual ~Command() {}
    virtual std::string execute(const std::vector<std::string>& arguments) const = 0;
};

class AddCommand : public Command {
public:
    std::string execute(const std::vector<std::string>& arguments) const override {
        int result = 0;
        for (const std::string& arg : arguments) {
            result += std::stoi(arg);
        }
        return "Result of addition: " + std::to_string(result);
    }
};

class MultiplyCommand : public Command {
public:
    std::string execute(const std::vector<std::string>& arguments) const override {
        int result = 1;
        for (const std::string& arg : arguments) {
            result *= std::stoi(arg);
        }
        return "Result of multiplication: " + std::to_string(result);
    }
};

class Calculator {
public:
    Calculator(const std::string& input) : inputString(input) {
        commandMap["add"] = std::make_unique<AddCommand>();
        commandMap["multiply"] = std::make_unique<MultiplyCommand>();
    }

    bool parseInput() {
        std::istringstream iss(inputString);
        iss >> operation;

        if (operation.empty()) {
            std::cerr << "Error: Missing operation" << std::endl;
            return false;
        }

        std::string argument;
        while (iss >> argument) {
            arguments.push_back(argument);
        }

        if (arguments.empty()) {
            std::cerr << "Error: No arguments provided" << std::endl;
            return false;
        }

        return true;
    }

    std::string performOperation() {
        if (commandMap.find(operation) != commandMap.end()) {
            return commandMap[operation]->execute(arguments);
        } else {
            return "Unknown operation: " + operation;
        }
    }

private:
    std::string inputString;
    std::string operation;
    std::vector<std::string> arguments;
    std::map<std::string, std::unique_ptr<Command>> commandMap;
};

int main() {
    std::string input;
    std::cout << "Enter input: ";
    std::getline(std::cin, input);

    try {
        Calculator calculator(input);

        if (calculator.parseInput()) {
            std::string result = calculator.performOperation();
            std::cout << result << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
