#include <iostream>
using namespace std;
void ZeroSmaller(int *a,int *b){
    if(*a < *b){
        *a=0;
        //return *a;
    }else{
        *b=0;
     //   return *b
    }
}
int main(){
    int a=1;
    int b=5;
    cout<<"Before calling function"<<endl;
    cout << "a:"<< a <<", b:"<< b <<endl;
    ZeroSmaller(&a,&b);
    cout<<"After calling function"<<endl;
    cout << "a:"<< a <<", b:"<< b <<endl;
    cout << "Made by Himanshu Kumar Jha \n";

}