#include <iostream>

// Base class 1
class Base1 {
    void display1() {
        std::cout << "Base1 Display" << std::endl;
    }
};

// Base class 2
class Base2 {
    void display2() {
        std::cout << "Base2 Display" << std::endl;
    }
};

// Derived class inheriting from both Base1 and Base2 (default visibility mode)
class MultipleInheritanceDefault : Base1, Base2 {
public:
    void displayDerived() {
        std::cout << "Multiple Inheritance Default Display" << std::endl;
    }
};

int main() {
    MultipleInheritanceDefault obj;

    // Accessing base class members through Derived class method
    obj.displayDerived();  // Accessible (default visibility in MultipleInheritanceDefault)

    return 0;
}
