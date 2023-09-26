#include <iostream>

class Grandparent {
    void defaultMethod() {
        std::cout << "Grandparent's default method" << std::endl;
    }
};

class Parent1 : Grandparent {
    void parent1Method() {
        std::cout << "Parent1's default method" << std::endl;
    }
};

class Parent2 {
    void parent2Method() {
        std::cout << "Parent2's default method" << std::endl;
    }
};

class Child : Parent1, Parent2 {
public:
    void childMethod() {
        std::cout << "Child's public method" << std::endl;
    }
};

int main() {
    Child child;

    // Accessing Child's public method
    child.childMethod(); // Accessible (public in Child)

    return 0;
}
