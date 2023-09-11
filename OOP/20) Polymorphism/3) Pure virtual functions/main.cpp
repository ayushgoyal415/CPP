#include <iostream>
using namespace std;

class Animal {
   public:
    Animal() { cout << "Animal constructor\n"; };

    // Declaring a pure virtual function so that it knows that its subclasses
    // may have this method and during runtime it bothers to looks into the
    // object class to find this function The role is just to access the methods
    // of its subclass using pointer to superclass
    virtual void run() = 0;

    virtual void speak() { cout << "Animal speak\n"; };
    virtual void activity() { cout << "Animal Roaming around\n"; };
    virtual ~Animal() { cout << "Animal Destructor\n"; };
};

class Tiger : public Animal {
   public:
    Tiger() { cout << "Tiger Constructor\n"; };
    void speak() { cout << "Tiger speak\n"; };
    void run() { cout << "Tiger running\n"; };
    ~Tiger() { cout << "Tiger destructor\n"; };
};

int main() {
    Animal* p = new Tiger();

    p->speak();

    p->run();  // Now we can access the run method from object class
               // although the run method in base class is set to 0
    p->activity();

    // Problem with pure virtual functions ->
    // Once we have declared a pure virtual function in a base class then we can
    // call that function from the derived class even while using a pointer to
    // the base class. But the problem may arise during run time if the pointer
    // is not able to find the same method in the object class. In such a case,
    // it will throw a rumtime error. So it is important to be aware of calling
    // only those functions that you know that the object class has. In short,
    // declaring pure virtual functions compel the programmer to assign
    // functions in all of its derived classes.

    delete p;

    return 0;
}