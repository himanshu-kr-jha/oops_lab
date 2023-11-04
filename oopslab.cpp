#include <iostream>

class MyNumber {
private:
    int value;

public:
    MyNumber(int val) : value(val) {}

    // Overload the pre-increment operator (++)
    MyNumber& operator++() {
        value++;
        return *this;
    }

    // Overload the pre-decrement operator (--)
    MyNumber& operator--() {
        value--;
        return *this;
    }

    // Overload the post-increment operator (++)
    MyNumber operator++(int) {
        MyNumber temp = *this;
        ++(*this);
        return temp;
    }

    // Overload the post-decrement operator (--)
    MyNumber operator--(int) {
        MyNumber temp = *this;
        --(*this);
        return temp;
    }

    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    MyNumber num(5);

    std::cout << "Initial value: ";
    num.display();

    ++num; // Pre-increment
    std::cout << "After pre-increment: ";
    num.display();

    --num; // Pre-decrement
    std::cout << "After pre-decrement: ";
    num.display();

    num++; // Post-increment
    std::cout << "After post-increment: ";
    num.display();

    num--; // Post-decrement
    std::cout << "After post-decrement: ";
    num.display();

    return 0;
}