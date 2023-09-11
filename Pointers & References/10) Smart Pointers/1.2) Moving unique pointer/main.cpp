#include <memory>

#include "Cat.cpp"
#include "Cat.h"

unique_ptr<Cat> set_age(unique_ptr<Cat> p) {
    // Data member 'age' is public and can be accessed
    p->age = 12;
    return p;
    // Note that fuctions can return unique pointers without moving
    // Although you can choose to return move(p) here for uniformity
}

int main() {
    // Note we cannot copy unique pointers but we can move them
    // This can help us pass unique pointers to and from functions

    unique_ptr<Cat> p = make_unique<Cat>();

    p->get_info();

    p = set_age(move(p));
    // Here first p is moving into the function at that moment it is
    // pointing to NULL and then the function is returning the same p back
    // to the p thus p is set back to it's original value

    p->get_info();

    return 0;
}