#include "Machine.h"

// PROBLEM : How to make parameterized constructors for subclasses by using
// private data members from superclass?
// Subclasses by default call the no argument constructor of the superclass so
// we can't use superclass parametized constructor to construct an object in
// subclass. Also, we can't create a parameterized constructor refering to 'id'
// in the subclass (e.g. 'Vehicle') as 'id' is private data member of superclass

// SOLUTION : To solve this problem we can explicitly ask subclass to run the
// constructor from superclass that accepts an argument 'id'

int main() {

    Car car1(43);
    car1.get_info();

    return 0;
}