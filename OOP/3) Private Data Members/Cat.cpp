#include "Cat.h"

void Cat::speak() {
    if (happy) {
        cout << "Meoww\n";
    } else {
        cout << "Grrr\n";
    }
}

void Cat::make_sad() {
    happy = false;  // Accessing private data members via methods
}

void Cat::make_happy() { happy = true; }