#include "Cat.cpp"
#include "Cat.h"

int main() {
    // Can't access private data members in main.cpp (e.g. we can't do
    // cat1.happy = false)

    Cat cat1;

    cat1.speak();  // Calling this method directly will use the default value
    cat1.make_sad(), cat1.speak();  // Acessing private data members indirectly
    cat1.make_happy(), cat1.speak();  // Again making the cat happy

    return 0;
}