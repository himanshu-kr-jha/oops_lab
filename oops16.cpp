#include <iostream>
using namespace std;

class Number {
public:
    virtual void getData() {
        cout << "Enter a number: ";
        cin >> num;
    }

    virtual void showData() {
        cout << "Number: " << num << endl;
    }

    virtual void showResult() {
        cout << "Square: " << (num * num) << endl;
        cout << "Cube: " << (num * num * num) << endl;
    }

protected:
    double num;
};

class SquareCube : public Number {
public:
    void getData() {
        cout << "Enter a number for Square and Cube: ";
        cin >> num;
    }
};

int main() {
    Number* numPtr;
    SquareCube obj;

    numPtr = &obj;

    numPtr->getData();
    numPtr->showData();
    numPtr->showResult();

    return 0;
}