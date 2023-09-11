#include <memory>

#include "Cat.h"

int main() {
    unique_ptr<Cat> p1, p2, p3, p4;

    p1 = make_unique<Cat>("One");
    p2 = make_unique<Cat>("Two");
    p3 = make_unique<Cat>("Three");

    // Using std::move() function (defined under iostream)
    p4 = move(p1);
    p4->get_info();
    if (p1 == NULL) cout << "p1 pointing to null\n\n";

    // Using .get() function to get address of a unique pointer and copy it into
    // a raw pointer. In this case as a copy is passed to raw pointer, the
    // original unique pointer will still be pointing to the original object.
    Cat* p_raw = p2.get();
    p_raw->get_info();
    if (p2 != NULL) cout << "p2 is still pointing to object\n\n";

    // Using .release() function to release ownership of a unique pointer and
    // move it into a raw pointer. Note that once released, no unique pointer is
    // having ownership of object being pointed by p_raw, so we have to manually
    // call delete on it to prevent memory leak or we can use .reset (see below)
    p_raw = p4.release();
    p_raw->get_info();
    if (p4 == NULL) cout << "p4 pointing to null\n\n";

    // Using .reset() function to make a pointer point at new location i.e.
    // reset its address by copying it from a raw pointer. Note that we cannot
    // pass unique pointer as two unique pointers cannot point at same location.
    p4.reset(p_raw);
    p4->get_info();
    if (p_raw != NULL) cout << "p_raw is still pointing to object\n\n";

    // Using .swap() function to swap the addresses between two unique pointers
    p1.swap(p4);
    p1->get_info();
    if(p4 == NULL) cout << "p4 pointing to null\n";

    return 0;
}