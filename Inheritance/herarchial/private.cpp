#include <iostream>

// Base class
class Animal {
private:
    void eat() {
        std::cout << "Animal eats" << std::endl;
    }
};

// Derived class 1
class Dog : private Animal {
public:
    void bark() {
        std::cout << "Dog barks" << std::endl;
    }
};

// Derived class 2
class Cat : private Animal {
public:
    void meow() {
        std::cout << "Cat meows" << std::endl;
    }
};

int main() {
    Dog myDog;
    Cat myCat;

    // Accessing private methods through public methods of derived classes
    myDog.bark(); // Accessible (public in Dog)
    myCat.meow(); // Accessible (public in Cat)

    return 0;
}
