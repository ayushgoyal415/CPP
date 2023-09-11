#include <iostream>
using namespace std;

class Animal {
   public:
    Animal() { cout << "Animal constructor\n"; };
    // Making functions virtual
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
    Animal* p = new Tiger;
    p->speak();  // Now the speak is running from the class to which the
                 // object originally belongs

    p->activity();  // If there is no method in the subclass with that
                    // name then it will run the method from the pointer
                    // class only

    // Can't do this as there is no virtual function named run in pointer class
    // so it throws an error. It does not bother looking into the object class
    // p->run();

    delete p;  // Object class destructor runs as we made the base class
               // destructor as virtual

    return 0;
}