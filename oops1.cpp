#include <iostream>
#include <cmath>
using namespace std;
//area of circle
float area(float radius){
  float area = M_PI*pow(radius,2);
  return area;
}
//area of rectangle
int area (double height,double width){
  int area_rect = height * width;
  return area_rect;
}
//area of triangle
float area (int height,int base){
  float area= (height*base)/2.0;
  return area;
}
int main(){
cout <<"Area of circle: "<< area(8.4) << "      "; // Circle area
cout <<"Area of rectangle: "<<area(8.2, 5.5) << "      "; // Rectangle area
cout <<"Area of triangle: "<< area(8, 1)<<"\n"; // Triangle area
cout << "Made by Himanshu Kumar Jha \n";
}

  

