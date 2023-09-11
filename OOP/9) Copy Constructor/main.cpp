#include "Cat.cpp"
#include "Cat.h"

int main() {
    Cat cat1;
    cat1.set_info("Tom", 10);
    cat1.get_info();

    // Creating a cat using copy constructor
    Cat cat2 = cat1;  // Can also write Cat cat2(cat1);
    cat2.get_info();

    return 0;
}