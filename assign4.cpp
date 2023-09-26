#include <iostream>
#include <string>
class marks_average; // Forward declaration of the friend class
class Student {
private:
    std::string name;
    float marks[5]; // Assuming 5 subjects
public:
    void Get_data() {
        std::cout << "Enter student name: ";
        std::cin >> name;
        std::cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            std::cout << "Subject " << i + 1 << ": ";
            std::cin >> marks[i];
        }
    }

    void display() {
        std::cout << "Student Name: " << name << std::endl;
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
        std::cout << "Average Marks: " << average << std::endl;
    }
};

int main() {
    Student student;
    student.Get_data();
    student.display();
    marks_average::calculateAverage(student);
    return 0;
}