#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <stdexcept>
#include <map>
#include <memory>

// Abstract base class for operations
class Operation {
public:
    virtual int perform(const std::vector<int>& arguments) const = 0;
    virtual ~Operation() = default;
};

// Concrete class for addition operation
class Addition : public Operation {
public:
    int perform(const std::vector<int>& arguments) const override {
        int result = 0;
        for (int arg : arguments) {
            result += arg;
        }
        return result;
    }
};

// Concrete class for subtraction operation
class Subtraction : public Operation {
public:
    int perform(const std::vector<int>& arguments) const override {
        if (arguments.empty()) {
            throw std::invalid_argument("Subtraction requires at least one argument.");
        }
        int result = arguments[0];
        for (size_t i = 1; i < arguments.size(); ++i) {
            result -= arguments[i];
        }
        return result;
    }
};

// Factory class for creating operations
class OperationFactory {
public:
    static std::unique_ptr<Operation> createOperation(const std::string& operationName) {
        auto it = operationMap.find(operationName);
        if (it != operationMap.end()) {
            return std::make_unique<it->second>();
        } else {
            throw std::invalid_argument("Invalid operation: " + operationName);
        }
    }

private:
    static std::map<std::string, Operation*> operationMap;
};

// Initialize the operation map
std::map<std::string, Operation*> OperationFactory::operationMap = {
    {"add", new Addition()},
    {"subtract", new Subtraction()}
};

// Abstract base class for parsers
class Parser {
public:
    virtual bool parse(const std::string& input, std::string& operationName, std::vector<int>& arguments) const = 0;
    virtual ~Parser() = default;
};

// Concrete parser class for the specified input format
class SimpleParser : public Parser {
public:
    bool parse(const std::string& input, std::string& operationName, std::vector<int>& arguments) const override {
        std::istringstream iss(input);
        iss >> operationName;
        int arg;
        while (iss >> arg) {
            arguments.push_back(arg);
        }
        return !operationName.empty();
    }
};

// Abstract base class for user interfaces
class UserInterface {
public:
    virtual std::string getInput() = 0;
    virtual void displayOutput(const std::string& output) = 0;
    virtual void displayError(const std::string& error) = 0;
    virtual ~UserInterface() = default;
};

// Concrete user interface implementation using iostream
class ConsoleUserInterface : public UserInterface {
public:
    std::string getInput() override {
        std::string input;
        std::cout << "Enter input in the form 'operation -arg1 arg2 -arg3 ...': ";
        std::getline(std::cin, input);
        return input;
    }

    void displayOutput(const std::string& output) override {
        std::cout << output << std::endl;
    }

    void displayError(const std::string& error) override {
        std::cerr << "Error: " << error << std::endl;
    }
};

// Generic error handling class
class ErrorHandling {
public:
    static void reportError(UserInterface& userInterface, const std::string& errorMessage) {
        userInterface.displayError(errorMessage);
    }
};

// Abstract base class for controllers
class Controller {
public:
    virtual void run() = 0;
    virtual ~Controller() = default;
};

// Concrete controller class
class SimpleController : public Controller {
public:
    SimpleController(Parser& parser, UserInterface& userInterface) : parser_(parser), userInterface_(userInterface) {}

    void run() override {
        std::string input = userInterface_.getInput();
        std::string operationName;
        std::vector<int> arguments;

        if (parser_.parse(input, operationName, arguments)) {
            try {
                std::unique_ptr<Operation> operation = OperationFactory::createOperation(operationName);
                int result = operation->perform(arguments);
                userInterface_.displayOutput("Result: " + std::to_string(result));
            } catch (const std::exception& e) {
                ErrorHandling::reportError(userInterface_, e.what());
            }
        } else {
            ErrorHandling::reportError(userInterface_, "Invalid input format.");
        }
    }

private:
    Parser& parser_;
    UserInterface& userInterface_;
};

int main() {
    SimpleParser parser;
    ConsoleUserInterface userInterface;
    SimpleController controller(parser, userInterface);
    controller.run();

    return 0;
}