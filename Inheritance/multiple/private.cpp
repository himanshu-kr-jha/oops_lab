#include <iostream>

// Base class 1
class Base1 {
private:
    void display1() {
        std::cout << "Base1 Display" << std::endl;
    }
};

// Base class 2
class Base2 {
private:
    void display2() {
        std::cout << "Base2 Display" << std::endl;
    }
};

// Derived class inheriting privately from both Base1 and Base2
class MultipleInheritancePrivate : private Base1, private Base2 {
public:
    void displayDerived() {
        std::cout << "Multiple Inheritance Private Display" << std::endl;
    }
};

int main() {
    MultipleInheritancePrivate obj;

    // Accessing private members through Derived class method
    obj.displayDerived();  // Accessible (private in MultipleInheritancePrivate)
    obj.display2();

    return 0;
}
