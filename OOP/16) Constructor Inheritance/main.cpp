#include "Machine.h"

// Everytime we construct a subclass object, default constructors of all the
// superclasses gets invoked thus assigning it all the necessary private data
// members (eg. machine id gets inherited in this example)

int main() {
    Car car1;
    car1.get_info();

    return 0;
}