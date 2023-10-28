#include <iostream>
#include <string>
using namespace std;
class marks_average; // Forward declaration of the friend class
class Student {
private:
    string name;
    float marks[5]; // Assuming 5 subjects
public:
    void Get_data() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void display() {
        cout << "Student Name: " << name << endl;
    }
 friend class marks_average;
};
class marks_average {
public:
    static void calculateAverage(Student& student) {
        float sum = 0.0;
        for (int i = 0; i < 5; ++i) {
            sum += student.marks[i];
        }
        float average = sum / 5;
        cout << "Average Marks: " << average << endl;
    }
};

int main() {
    Student student;
    student.Get_data();
    student.display();
    marks_average::calculateAverage(student);
    cout << "Made by Himanshu Kumar Jha \n";

    return 0;
}