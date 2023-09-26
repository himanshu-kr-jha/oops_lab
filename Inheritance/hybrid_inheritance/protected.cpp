#include <iostream>

class Grandparent {
protected:
    void protectedMethod() {
        std::cout << "Grandparent's protected method" << std::endl;
    }
};

class Parent1 : protected Grandparent {
protected:
    void parent1Method() {
        std::cout << "Parent1's protected method" << std::endl;
    }
};

class Parent2 {
protected:
    void parent2Method() {
        std::cout << "Parent2's protected method" << std::endl;
    }
};

class Child : protected Parent1, protected Parent2 {
public:
    void childMethod() {
        std::cout << "Child's public method" << std::endl;
    }
};

int main() {
    Child child;

    // Accessing protected methods through Child's public method
    child.childMethod(); // Accessible (public in Child)

    return 0;
}
