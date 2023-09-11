#include <iostream>

// Base class 1
class Base1 {
protected:
    void display1() {
        std::cout << "Base1 Display" << std::endl;
    }
};

// Base class 2
class Base2 {
protected:
    void display2() {
        std::cout << "Base2 Display" << std::endl;
    }
};

// Derived class inheriting protectedly from both Base1 and Base2
class MultipleInheritanceProtected : protected Base1, protected Base2 {
public:
    void displayDerived() {
        std::cout << "Multiple Inheritance Protected Display" << std::endl;
    }
};

int main() {
    MultipleInheritanceProtected obj;

    // Accessing protected members through Derived class method
    obj.displayDerived();  // Accessible (protected in MultipleInheritanceProtected)

    return 0;
}
