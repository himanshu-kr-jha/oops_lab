#include <iostream>

class c_polygon {
public:
    virtual double area() {
        return 0.0; // Default implementation for base class
    }
};

class c_triangle : public c_polygon {
private:
    double base;
    double height;

public:
    c_triangle(double b, double h) : base(b), height(h) {}

    // Override the base class's area function to calculate the area of a triangle
    double area() override {
        return 0.5 * base * height;
    }
};

class c_rectangle : public c_polygon {
private:
    double length;
    double width;

public:
    c_rectangle(double l, double w) : length(l), width(w) {}

    // Override the base class's area function to calculate the area of a rectangle
    double area() override {
        return length * width;
    }
};

int main() {
    c_polygon* shape1 = new c_triangle(5.0, 4.0);
    c_polygon* shape2 = new c_rectangle(6.0, 3.0);

    std::cout << "Area of the triangle: " << shape1->area() << std::endl;
    std::cout << "Area of the rectangle: " << shape2->area() << std::endl;

    delete shape1;
    delete shape2;
    return 0;
}
