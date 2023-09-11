#include <iostream>
#include <string>

class Vehicle {
public:
    std::string brand;
    int year;

    Vehicle(const std::string& b, int y) : brand(b), year(y) {}

    void startEngine() {
        std::cout << "Starting the engine of " << brand << std::endl;
    }

    void stopEngine() {
        std::cout << "Stopping the engine of " << brand << std::endl;
    }
};

class Car : public Vehicle {
public:
    int numberOfDoors;

    Car(const std::string& b, int y, int doors) : Vehicle(b, y), numberOfDoors(doors) {}

    void honkHorn() {
        std::cout << "Honking the horn of " << brand << std::endl;
    }
};

int main() {
    Car myCar("Toyota", 2022, 4);

    std::cout << "My car is a " << myCar.year << " " << myCar.brand << " with " << myCar.numberOfDoors << " doors." << std::endl;

    myCar.startEngine();
    myCar.honkHorn();
    myCar.stopEngine();

    return 0;
}