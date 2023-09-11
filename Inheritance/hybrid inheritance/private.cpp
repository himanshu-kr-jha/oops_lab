#include <iostream>

class Grandparent {
private:
    void privateMethod() {
        std::cout << "Grandparent's private method" << std::endl;
    }
};

class Parent1 : private Grandparent {
private:
    void parent1Method() {
        std::cout << "Parent1's private method" << std::endl;
    }
};

class Parent2 {
private:
    void parent2Method() {
        std::cout << "Parent2's private method" << std::endl;
    }
};

class Child : private Parent1, private Parent2 {
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
