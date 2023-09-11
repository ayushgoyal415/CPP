#include <memory>  // Header file to get access to smart pointers

#include "Cat.cpp"
#include "Cat.h"

// Smart are basically using the raw pointer to make 'new' objects but they
// delete the memory allocated implicitly i.e. they don't need delete to free
// memory. Hence solving the problem of memory leak

int main() {
    // Unique pointer deletes automatically once the scope in which it is
    // created ends. It is called unique because it can't be copied to another
    // pointer. It makes no sense to make copy of unique pointer as it will
    // delete memory once the scope ends. Thus by not allowing to nake copy,
    // unique pointer is ensuring that the copied pointer does not keep pointing
    // at a location that has now been deallocated.

    {
        // Creating an object using unique pointer
        unique_ptr<Cat> pCat = make_unique<Cat>("Bob", 3);
        pCat->get_info();
        pCat->speak();
        pCat->set_info("Tom", 12);
        pCat->get_info();

        // We can also make an array of objects using unique pointer
        // unique_ptr<Cat> pCat_arr[5] = make_unique<Cat>("Bob", 5);

        // Cannot do this to make a copy
        // unique_ptr<Cat> pCat2 = pCat;
    }

    cout << "The object deletes before entering this scope\n";
    return 0;
}