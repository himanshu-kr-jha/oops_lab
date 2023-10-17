#include <iostream>
using namespace std;
class Box {
private:
    double length;
    double width;
    double height;
    static int count; // Static variable to keep track of the number of objects created
public:
    // Constructor to initialize the box dimensions
    Box(double l, double w, double h) : length(l), width(w), height(h) {
        count++; // Increment the count when a new object is created
    }
   // Function to calculate the volume of the box
    double calculateVolume() {
        return length * width * height;
    }
 // Static function to get the count of objects created
    static int getCount() {
        return count;
    }
};
// Initialize the static variable count
int Box::count = 0;
int main() {
    // Create three Box objects
    Box box1(2.0, 3.0, 4.0);
    Box box2(1.5, 2.5, 3.5);
    Box box3(3.0, 4.0, 5.0);
// Calculate and display the volume of each box
    cout << "Volume of Box 1: " << box1.calculateVolume() << endl;
    cout << "Volume of Box 2: " << box2.calculateVolume() << endl;
    cout << "Volume of Box 3: " << box3.calculateVolume() << endl;
   // Display the total number of objects created
    cout << "Total number of Box objects created: " << Box::getCount() << endl;
   return 0;
}