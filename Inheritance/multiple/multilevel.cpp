#include <iostream>
using namespace std;

class Grandparent {
public:
    void tellStory() {
        cout << "Grandparent tells a family story" << endl;
    }
};


class Parent1 {
public:
    void provideLove() {
        cout << "Parent 1 provides love and care" << endl;
    }
};


class Parent2 {
public:
    void provideSupport() {
        cout << "Parent 2 provides support and guidance" << endl;
    }
};

// Child class inheriting from both parents publicly
class Child : public Parent1, public Parent2, public Grandparent{
public:
    void play() {
        cout << "Child plays with toys" << endl;
    }
};

int main() {
    Child myChild;

    myChild.tellStory();    
    myChild.provideLove();   
    myChild.provideSupport();
    myChild.play();          

    return 0;
}
