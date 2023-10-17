#include<iostream>
using namespace std;

int fun_over(int n){
    return (n<0)?-n:n;
}
float fun_over(float n){
    if(n<0)
        return -n;
}

int main(){
    cout<<"Enter values of a and b"<<endl;
    int a;
    float b;
    cin>>a>>b;
    cout<<"absolute value of input are "<<fun_over(a);
    cout<<" and "<<fun_over(b);
    
}