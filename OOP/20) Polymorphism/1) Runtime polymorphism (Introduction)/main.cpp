#include <iostream>
using namespace std;

class Animal {
   public:
    Animal() { cout << "Animal constructor\n"; };
    void speak() { cout << "Animal speak\n"; };
    ~Animal() { cout << "Animal Destructor\n"; };
};
class Tiger : public Animal {
   public:
    Tiger() { cout << "Tiger Constructor\n"; };
    void speak() { cout << "Tiger speak\n"; };
    void run() { cout << "Tiger running\n"; };
    ~Tiger() { cout << "Tiger destructor\n"; };
};

int main() {
    /*

        Note : We can do the thing shown below. Here we are constructing a derived
        class (Tiger) object using a pointer to base class (Animal). In fact this is
        very useful as we would want to point to objects of multiple derived classes
        with only one type of pointer i.e. to the base class. But while doing this
        we want that the methods that run should be of the derived class to which
        the object originally belongs. But this does not happen as the pointer is
        pointing to the base class so it runs the functions of base class only. And
        if there is no function in the base class it will give an error.
        
    */

    // On constructing in the way shown, both the Animal and Tiger class
    // constructors are running which is a good thing
    Animal* p = new Tiger;

    p->speak();  // Speak method of class Animal is run instead of Tiger

    // pAnimal->run(); Cannot do this as class Animal has no method run

    // On deleting only the Animal destructor is running which is a bad thing
    // because Tiger was constructed and here it is not getting destructed
    delete p;

    return 0;
}