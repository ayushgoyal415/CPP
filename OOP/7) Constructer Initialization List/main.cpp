#include "Cat.cpp"
#include "Cat.h"

int main() {
    // Creating a cat using default unloaded constructor
    Cat cat1;
    cat1.get_info();

    // Creating a cat using custom constructor that accepts a string
    Cat cat2("Bob");
    cat2.get_info();

    // Creating a cat using custom constructor that accepts string and integer
    Cat cat3("Tom", 12);
    cat3.get_info();

    return 0;
}