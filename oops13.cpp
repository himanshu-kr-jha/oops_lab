// // #include <iostream>

// // using namespace std;
// // class Employee {
// // protected:
// //     string name;
// //     int employeeId;

// // public:
// //     Employee(const string& empName, int empId) : name(empName), employeeId(empId) {}

// //     void displayInfo() {
// //         cout << "Name: " << name << "\nEmployee ID: " << employeeId << endl;
// //     }
// // };

// // class Faculty : public Employee {
// // protected:
// //     double basicSalary;
// //     double allowance;

// // public:
// //     Faculty(const string& empName, int empId, double empBasicSalary, double empAllowance)
// //         : Employee(empName, empId), basicSalary(empBasicSalary), allowance(empAllowance) {}

// //     double calculateSalary() {
// //         return basicSalary + allowance;
// //     }

// //     void displaySalary() {
// //         cout << "Faculty Salary: " << calculateSalary() << endl;
// //     }
// // };

// // class Staff : public Employee {
// // protected:
// //     double hourlyRate;
// //     int hoursWorked;

// // public:
// //     Staff(const string& empName, int empId, double empHourlyRate, int empHoursWorked)
// //         : Employee(empName, empId), hourlyRate(empHourlyRate), hoursWorked(empHoursWorked) {}

// //     double calculateSalary() {
// //         return hourlyRate * hoursWorked;
// //     }

// //     void displaySalary() {
// //         cout << "Staff Salary: " << calculateSalary() << endl;
// //     }
// // };

// // int main() {
// //     Faculty facultyMember("John Doe", 1001, 5000.0, 1000.0);
// //     Staff staffMember("Jane Smith", 2001, 15.0, 40);

// //     cout << "Faculty Member Information:" << endl;
// //     facultyMember.displayInfo();
// //     facultyMember.displaySalary();

// //     cout << "\nStaff Member Information:" << endl;
// //     staffMember.displayInfo();
// //     staffMember.displaySalary();

// //     return 0;
// // }
// #include <iostream>
// using namespace std;
// class Employee {
// protected:
//     string name;
//     int employeeId;

// public:
//     Employee(const string& empName, int empId) : name(empName), employeeId(empId) {}

//     void displayInfo() {
//         cout << "Name: " << name << "\nEmployee ID: " << employeeId << endl;
//     }
// };

// class Salary {
// protected:
//     double basicSalary;
//     double allowance;

// public:
//     Salary(double empBasicSalary, double empAllowance) : basicSalary(empBasicSalary), allowance(empAllowance) {}

//     double calculateSalary() {
//         return basicSalary + allowance;
//     }

//     void displaySalary() {
//         cout << "Salary: " << calculateSalary() << endl;
//     }
// };

// class Faculty : public Employee, public Salary {
// public:
//     Faculty(const string& empName, int empId, double empBasicSalary, double empAllowance)
//         : Employee(empName, empId), Salary(empBasicSalary, empAllowance) {}
// };

// int main() {
//     Faculty facultyMember("John Doe", 1001, 5000.0, 1000.0);

//     cout << "Faculty Member Information:" << endl;
//     facultyMember.displayInfo();
//     facultyMember.displaySalary();

//     return 0;
// }
#include <iostream>
using namespace std;
class A {
protected:
    int a1;

public:
    A(int a) : a1(a) {}

    int get_a() {
        return a1;
    }

    void display_a() {
        cout << "A: a1 = " << a1 << endl;
    }
};

class B : public A {
protected:
    int b1;

public:
    B(int a, int b) : A(a), b1(b) {}

    int get_b() {
        return b1;
    }

    void display_b() {
        cout << "B: b1 = " << b1 << endl;
    }
};

class C : public B {
protected:
    int c1;

public:
    C(int a, int b, int c) : B(a, b), c1(c) {}

    int get_c() {
        return c1;
    }

    void display_c() {
        cout << "C: c1 = " << c1 << endl;
    }
};

int main() {
    C cObject(1, 2, 3);

    // Accessing members of class A
    cout << "Accessing members of class A from C:" << endl;
    cout << "a1 (A) = " << cObject.get_a() << endl;
    cObject.display_a();

    // Accessing members of class B
    cout << "\nAccessing members of class B from C:" << endl;
    cout << "a1 (A) = " << cObject.get_a() << endl;
    cout << "b1 (B) = " << cObject.get_b() << endl;
    cObject.display_a();
    cObject.display_b();

    // Accessing members of class C
    cout << "\nAccessing members of class C from C:" << endl;
    cout << "a1 (A) = " << cObject.get_a() << endl;
    cout << "b1 (B) = " << cObject.get_b() << endl;
    cout << "c1 (C) = " << cObject.get_c() << endl;
    cObject.display_a();
    cObject.display_b();
    cObject.display_c();

    return 0;
}
