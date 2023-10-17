#include <iostream>
#include <cstring>
using namespace std;
class MyString
{
private:
    char *str;

public:
    MyString()
    {
        str = nullptr;
    }
    MyString(const char *s)
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    // Copy Constructor
    MyString(const MyString &other)
    {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }
    // Destructor
    ~MyString()
    {
        delete[] str;
    }
    // Assignment Operator Overload
    MyString &operator=(const MyString &other)
    {
        if (this == &other)
        {
            return *this; // Handle self-assignment
        }
        delete[] str; // Deallocate memory
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
        return *this;
    }
    // Equality Operator Overload
    bool operator==(const MyString &other) const
    {
        return strcmp(str, other.str) == 0;
    }
    // Less Than Operator Overload
    bool operator<(const MyString &other) const
    {
        return strcmp(str, other.str) < 0;
    }
    // Greater Than Operator Overload
    bool operator>(const MyString &other) const
    {
        return strcmp(str, other.str) > 0;
    }
    // Concatenation Operator Overload
    MyString operator+(const MyString &other) const
    {
        char *newStr = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(newStr, str);
        strcat(newStr, other.str);
        return MyString(newStr);
    }
    void display()
    {
        if (str)
            std::cout << str << std::endl;
    }
};
int main()
{
    MyString s1("Hello");
    MyString s2("World");


    cout<<"copying s1 to s3 and s2 to s4"<<endl;
    MyString s3 = s1; // Copy Constructor
    MyString s4;
    s4 = s2; // Assignment Operator


    cout<<"displaying s3 and s4"<<endl;
    s3.display();
    s4.display();


    cout<<"checking equality"<<endl;
    if (s1 == s2)
        std::cout << "s1 and s2 are equal." << std::endl;
    else if (s1 < s2)
        std::cout << "s1 is less than s2." << std::endl;
    else
        std::cout << "s1 is greater than s2." << std::endl;


    cout<<"using concatenation"<<endl;
    MyString s5 = s1 + s2; // Concatenation
    s5.display();


    return 0;
}
