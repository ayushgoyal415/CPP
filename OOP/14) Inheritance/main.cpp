#include "Animal.cpp"
#include "Animal.h"

int main() {
    Animal animal1;
    animal1.speak();
    cout << "\n";

    Cat cat1;
    cat1.speak();
    cat1.work();
    cout << "\n";

    Tiger tiger1;
    tiger1.speak();
    tiger1.work();
    tiger1.attack();
    cout << "\n";

    return 0;
}