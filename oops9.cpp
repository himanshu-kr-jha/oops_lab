#include<bits/stdc++.h>
using namespace std;

inline double add(double i,double j){
    return i+j;
}
inline double sub(double i,double j){
    return i-j;
}
inline double multi(double i,double j){
    return i*j;
}
inline double div(double i,double j){
    if (j != 0) 
        return i/j;
    else {
        cout<< "Error: Division by zero!" << endl;
        return 0.0;
    }
}
inline double mod(int a, int b) {
  return a % b;
}

int main(){
    cout<<"Enter values of a and b"<<endl;
    double a,b;
    cin>>a>>b;
    
    cout<<"addition inline function in a and b is "<<add(a,b)<<endl;
    cout<<"subtraction inline function in a and b is "<<sub(a,b)<<endl;
    cout<<"multipication inline function in a and b is "<<multi(a,b)<<endl;
    cout<<"division inline function in a and b is "<<div(a,b)<<endl;
    cout<<"modulus inline function in a and b is "<<mod(a,b)<<endl;
    
}