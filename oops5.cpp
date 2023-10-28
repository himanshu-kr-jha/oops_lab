#include <iostream>
using namespace std;
class Student {
private:
  string name;
  int marks[5];
public:
  Student(string name, int marks[5]) {
    this->name = name;
    for (int i = 0; i < 5; i++) {
      this->marks[i] = marks[i];
    }
  }

  friend float friend_func1(Student s);
  friend float friend_func2(Student s, int sub1, int sub2, int sub3);

  float avg() {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
      sum += marks[i];
    }
    return sum / (float)5;
  }
};

float friend_func1(Student s) {
  cout << "Average marks of " << s.name << " is " << s.avg() << endl;
  return s.avg();
}

float friend_func2(Student s, int sub1, int sub2, int sub3) {
  s.marks[0] = sub1;
  s.marks[1] = sub2;
  s.marks[2] = sub3;
  cout << "Average marks of " << s.name << " is " << s.avg() << endl;
  return s.avg();
}

int main() {
  int marks[] = {80, 90, 75, 85, 90};
  Student s1("shinchan", marks);

  friend_func1(s1);
  friend_func2(s1, 95, 85, 90);
  cout << "Made by Himanshu Kumar Jha \n";

  return 0;
}
