// // // #include <iostream>
// // // using namespace std;

// // // class Complex
// // // {
// // //     int a, b;

// // // public:
// // //     Complex(){
// // //         a = 0;
// // //         b =0;
// // //         cout <<"constructor with no args"<< endl;
// // //     }

// // //     Complex(int x, int y)
// // //     {
// // //         a = x;
// // //         b = y;
// // //         cout <<"constructor with 2 args"<< endl;
// // //     }

// // //     Complex(int x){
// // //         a = x;
// // //         b = 0;
// // //         cout <<"constructor with 1 args"<< endl;
// // //     }

  

// // //     void printNumber()
// // //     {
// // //         cout << "Your number is " << a << " + " << b << "i" << endl;
// // //     }
// // // };

// // // int main()
// // // {
// // //     Complex c1(4, 6);
// // //     c1.printNumber();

// // //     Complex c2(5);
// // //     c2.printNumber();

// // //     Complex c3;
// // //     c3.printNumber();
// // //     return 0;
// // // }


// // #include <iostream>
// // using namespace std;

// // class Student
// // {
// // protected:
// //     int roll_number;

// // public:
// //     void set_roll_number(int);
// //     void get_roll_number(void);
// // };

// // void Student ::set_roll_number(int r)
// // {
// //     roll_number = r;
// // }

// // void Student ::get_roll_number()
// // {
// //     cout << "The roll number is " << roll_number << endl;
// // }
// // class Exam : public Student
// // {
// // protected:
// //     float maths;
// //     float physics;

// // public:
// //     void set_marks(float, float);
// //     void get_marks(void);
// // };

// // void Exam ::set_marks(float m1, float m2)
// // {
// //     maths = m1;
// //     physics = m2;
// // }

// // void Exam ::get_marks()
// // {
// //     cout << "The marks obtained in maths are: " << maths << endl;
// //     cout << "The marks obtained in physics are: " << physics << endl;
// // }
// // class Result : public Exam
// // {
// //     float percentage;

// // public:
// //     void display_results()
// //     {
// //         get_roll_number();
// //         get_marks();
// //         cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
// //     }
// // };
// // int main()
// // {
// //     Result harry;
// //     harry.set_roll_number(420);
// //     harry.set_marks(94.0, 90.0);
// //     harry.display_results();
// //     return 0;
// // }
// #include <iostream>
// using namespace std;
// class Test
// {
//     int a;
//     int b;

// public:
//     Test(int i, int j) : a(i), b(j*99)
//     {
//         cout << "Constructor executed"<<endl;
//         cout << "Value of a is "<<a<<endl;
//         cout << "Value of b is "<<b<<endl;
//     }
// };

// int main()
// {
//     Test t(4, 6);

//     return 0;
// }
#include <iostream>
using namespace std;
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title =  s;
            rating = r;
        }
        virtual void display()=0;
};
class CWHVideo: public CWH
{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};    
class CWHText: public CWH
{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){
            words = wc;
        }
     void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};
int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
