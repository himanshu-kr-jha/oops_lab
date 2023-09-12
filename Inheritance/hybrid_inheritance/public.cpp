#include <iostream>

class Grandparent {
public:
    void publicMethod() {
        std::cout << "Grandparent's public method" << std::endl;
    }
};

class Parent1 : public Grandparent {
public:
    void parent1Method() {
        std::cout << "Parent1's public method" << std::endl;
    }
};

class Parent2 {
public:
    void parent2Method() {
        std::cout << "Parent2's public method" << std::endl;
    }
};

class Child : public Parent1, public Parent2 {
public:
    void childMethod() {
        std::cout << "Child's public method" << std::endl;
    }
};

int main() {
    Child child;

    child.publicMethod();   // Accessible (public in Grandparent)
    child.parent1Method();  // Accessible (public in Parent1)
    child.parent2Method();  // Accessible (public in Parent2)
    child.childMethod();    // Accessible (public in Child)

    return 0;
}
