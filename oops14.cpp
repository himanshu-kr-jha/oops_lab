#include <iostream>
#include <cmath>
using namespace std;
// Function to calculate the area of a square
double area(double side) {
    double result = side * side;
    cout << "Input:" << "side=" << side <<endl<<"Shape: Square"<<endl <<"Output: " << result << endl;
    cout<<"---------------------"<<endl;
    return result;
}

// Function to calculate the area of a rectangle
double area(float length, float width) {
    double result = length * width;
    cout << "Input: length=" << length << " Width=" << width << endl<<"Shape: Rectangle" <<endl<<"Output:" << result << endl;
    cout<<"---------------------"<<endl;
    return result;
}

// Function to calculate the area of a circle
double area(float radius) {
    double result = M_PI * radius * radius;
    cout << "Input: radius=" << radius << endl<<"Shape: Circle"<<endl<< "Output:" << result << endl;
    cout<<"---------------------"<<endl;
    return result;
}

// Function to calculate the area of a triangle
double area(double base, double height) {
    double result = 0.5 * base * height;
    cout << "Input: base=" << base << ", height=" << height << endl<<"Shape: Triangle"<<endl<< "Output: " << result << endl;
    cout<<"---------------------"<<endl;
    return result;
}

// Function to calculate the area of a trapezoid
// double area(double base1, double base2, double height) {
//     double result = 0.5 * (base1 + base2) * height;
//     cout << "Input: base1=" << base1 << ", base2=" << base2 << ", height=" << height << ", Shape: Trapezoid, Output: " << result << endl;
//     return result;
// }

// Function to calculate the area of a parallelogram with default values
double area(float base, double height, double angle = 90.0) {
    double result = base * height * sin(angle * M_PI / 180);
    cout << "Input: base=" << base << ", height=" << height << ", angle=" << angle << endl<<"Shape: Parallelogram"<<endl<<"Output: " << result << endl;
    cout<<"---------------------"<<endl;
    return result;
}

int main() {
    area(4.0);                   
    area(5.5f);                  
    area(5.0, 3);               
    area(2.5f, 3.5f);          
    area(6.0, 4.0);                 
    area(8.0, 5.0, 6.0);        
    area(7.0f, 4.0, 60.0);        
    area(7.0, 4.0);            
    area(8.0f, 6.0f);             
    area(4.0f, 3.0);             

    return 0;
}
