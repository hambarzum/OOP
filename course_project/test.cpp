#include <iostream>
#include <memory>
#include <vector>
#include <unordered_map>

class Base1 {
public:
    virtual ~Base1() = default;
};

class Base2 {
public:
    virtual void foo2() = 0;
};

class Derived : public Base1, public Base2 {
public:
    void foo() {}
    void foo2() override {}
};


int main() {
    std::string raw = R"(hello
    world)";

    std::cout << raw;

}