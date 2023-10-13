#include <iostream>
#include <cmath>

// Function to calculate the area of a square
double area(double side) {
    double result = side * side;
    std::cout << "Input:" << "side=" << side <<std::endl<<"Shape: Square"<<std::endl <<"Output: " << result << std::endl;
    std::cout<<"---------------------"<<std::endl;
    return result;
}

// Function to calculate the area of a rectangle
double area(float length, float width) {
    double result = length * width;
    std::cout << "Input: length=" << length << " Width=" << width << std::endl<<"Shape: Rectangle" <<std::endl<<"Output:" << result << std::endl;
    std::cout<<"---------------------"<<std::endl;
    return result;
}

// Function to calculate the area of a circle
double area(float radius) {
    double result = M_PI * radius * radius;
    std::cout << "Input: radius=" << radius << std::endl<<"Shape: Circle"<<std::endl<< "Output:" << result << std::endl;
    std::cout<<"---------------------"<<std::endl;
    return result;
}

// Function to calculate the area of a triangle
double area(double base, double height) {
    double result = 0.5 * base * height;
    std::cout << "Input: base=" << base << ", height=" << height << std::endl<<"Shape: Triangle"<<std::endl<< "Output: " << result << std::endl;
    std::cout<<"---------------------"<<std::endl;
    return result;
}

// Function to calculate the area of a trapezoid
// double area(double base1, double base2, double height) {
//     double result = 0.5 * (base1 + base2) * height;
//     std::cout << "Input: base1=" << base1 << ", base2=" << base2 << ", height=" << height << ", Shape: Trapezoid, Output: " << result << std::endl;
//     return result;
// }

// Function to calculate the area of a parallelogram with default values
double area(float base, double height, double angle = 90.0) {
    double result = base * height * std::sin(angle * M_PI / 180);
    std::cout << "Input: base=" << base << ", height=" << height << ", angle=" << angle << std::endl<<"Shape: Parallelogram"<<std::endl<<"Output: " << result << std::endl;
    std::cout<<"---------------------"<<std::endl;
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
