#include "Cat.cpp"
#include "Cat.h"

int main() {
    Cat cat;
    cat.set_name("Cat 1");

    {
        Cat cat;  // Can create a new Cat object with same name in this subscope
        cat.set_name("Cat 2");
    }

    return 0;
}