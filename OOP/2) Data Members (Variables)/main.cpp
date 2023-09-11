#include "Cat.cpp"
#include "Cat.h"

int main() {
    Cat cat1;
    cat1.happy = true;  // Accessing a public data member in main.cpp
    cat1.speak();

    Cat cat2;
    cat2.happy = false;
    cat2.speak();

    return 0;
}