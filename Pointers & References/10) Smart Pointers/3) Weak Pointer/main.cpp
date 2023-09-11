#include <memory>

#include "Cat.h"

int main() {
    // Weak pointers don't keep the objects alive they are just used to check if
    // the object is still alive or not.

    shared_ptr<Cat> p1;
    weak_ptr<Cat> wp1, wp2;

    {
        shared_ptr<Cat> p2[2] = make_shared<Cat>();

        wp1 = p2[0], wp2 = p2[1];
        p1 = p2[0];

        cout << "Object 1 is shared with : " << wp1.use_count()
             << " object(s)\n";
        cout << "Object 2 is shared with : " << wp2.use_count()
             << " object(s)\n";
    }
    cout << "Object 1 is shared with : " << wp1.use_count() << " object(s)\n";
    cout << "Object 2 is shared with : " << wp2.use_count() << " object(s)\n";

    return 0;
}