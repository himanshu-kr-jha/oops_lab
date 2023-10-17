#include <iostream>
#include<string>

using namespace std;

class pntr_obj {
private:
  int roll_no;
  string name;

public:
  void set_data(int roll, string inputname) {
    this->roll_no = roll;
    this->name = inputname;
  }

  void print() {
    cout << "Roll number: " << this->roll_no << endl;
    cout << "Student name: " << this->name << endl;
  }
};

int main() {
  pntr_obj obj1, obj2, obj3;

  // Set the data values for the three objects
  obj1.set_data(1, "Alan");
  obj2.set_data(2, "Bobby");
  obj3.set_data(3, "Christine");

  // Print the data values for the three objects
  obj1.print();
  obj2.print();
  obj3.print();

  return 0;
}
