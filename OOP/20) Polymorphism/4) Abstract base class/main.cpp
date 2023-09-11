#include <iostream>
using namespace std;

class Animal {
   public:
    Animal() { cout << "Animal constructed\n"; };
    virtual void speak() = 0;
    virtual void run() = 0;
    virtual void scratch() = 0;
    virtual void attack() = 0;
    virtual ~Animal() { cout << "Animal dying\n"; };
};
// Creating multiple derived classes from base class
class Cat : public Animal {
   public:
    Cat() { cout << "Cat constructed\n"; };
    void speak() { cout << "Cat speaking\n"; };
    void run() { cout << "Cat running\n"; };
    void scratch() { cout << "Cat scratching\n"; };
    void attack(){};  // As we have declared a virtual function named attack in
                      // base class to access it in Tiger subclass, we are now
                      // forced to declare the same function in every derived
                      // class even if it does not do that thing.
    ~Cat() { cout << "Cat dying\n"; };
};

class Tiger : public Animal {
   public:
    Tiger() { cout << "Tiger constructed\n"; };
    void speak() { cout << "Tiger speaking\n"; };
    void run() { cout << "Tiger running\n"; };
    void attack() { cout << "Tiger Attacking\n"; };
    void scratch(){};  // Forced empty function
    ~Tiger() { cout << "Tiger dying\n"; };
};

int main() {
    Animal* p1 = new Cat;
    cout << "\n";

    p1->attack();  // Running empty forced function
    p1->run();
    p1->scratch();
    p1->speak();
    cout << "\n";
    delete p1;
    cout << "\n\n\n";

    Animal* p2 = new Tiger;
    cout << "\n";
    p2->attack();
    p2->run();
    p2->scratch();  // Running empty forced function
    p2->speak();
    cout << "\n";
    delete p2;

    return 0;
}
