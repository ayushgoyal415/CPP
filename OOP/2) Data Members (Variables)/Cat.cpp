#include "Cat.h"

void Cat::speak() {
    if (happy) {  // Accessing a public data member in method
        cout << "Meoww\n";
    } else {
        cout << "Grrr\n";
    }
}