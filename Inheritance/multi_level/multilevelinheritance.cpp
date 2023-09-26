#include <iostream>
#include <string>

class Vehicle {
public:
    std::string vehicleType = "Generic Vehicle";

    void startEngine() {
        std::cout << "Starting the engine of the " << vehicleType << std::endl;
    }

protected:
    int maxSpeed = 100;
};

class Car : public Vehicle {
public:
    std::string carType = "Basic Car";

    void drive() {
        std::cout << "Driving the " << carType << " at a max speed of " << maxSpeed << " km/h" << std::endl;
    }

private:
    int capacity = 5;
};

class SportsCar : public Car {
public:
    std::string sportsCarType = "Sports Car";

    void race() {
        std::cout << "Racing the " << sportsCarType << " at a max speed of " << maxSpeed << " km/h" << std::endl;
    }
};

int main() {
    SportsCar mySportsCar;

    mySportsCar.startEngine(); // Accessible (inherited from Vehicle)
    mySportsCar.drive();       // Accessible (inherited from Car)
    mySportsCar.race();        // Accessible (inherited from SportsCar)

    return 0;
}
