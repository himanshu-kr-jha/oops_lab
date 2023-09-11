#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "Animal eats" << std::endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog barks" << std::endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        std::cout << "Cat meows" << std::endl;
    }
};

int main() {
    Dog myDog;
    Cat myCat;

    myDog.eat(); // Accessible (public in Animal)
    myDog.bark(); // Accessible (public in Dog)

    myCat.eat(); // Accessible (public in Animal)
    myCat.meow(); // Accessible (public in Cat)

    return 0;
}
