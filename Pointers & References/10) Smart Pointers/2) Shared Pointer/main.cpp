#include <memory>

#include "Cat.h"

int main() {
    // Shared pointer deallocates memory it is pointing to automatically as soon
    // as all the pointers pointing to the same object get destroyed. It keeps
    // the count of copies made and when all the copies go out of scope, it
    // deallocates the memory automatically.

    // If there is no pointer pointing to an object created using make_shared,
    // the object will die once the scope ends

    {
        shared_ptr<Cat> p1 = make_shared<Cat>("Tom");
        // This pointer will die outside this scope as it is not sharing its
        // address to any other pointer when it hits the end of this scope

        //-------------------------------------------------------------------
        // Accessing shared count of a pointer (using .use_count())
        // Note that don't use -> while accessing use_count() as it is not a
        // method of class Cat but it is method of class shared pointer
        //-------------------------------------------------------------------
        cout << "Shared Count : " << p1.use_count() << "\n";
    }
    cout << "Memory will be deallocated before this scope is entered\n\n\n";

    // Declaring two shared_ptr p1,p2 in bigger scope
    shared_ptr<Cat> p1, p2;
    {
        // Constructing a array of objects using shared pointer
        // Note : You cannot increment a shared pointer
        // Note : Shared pointer to an array behaves differently from shared
        // pointer to an object
        shared_ptr<Cat> p3[3] = make_shared<Cat>();
        p3[0]->set_info("One");
        p3[1]->set_info("Two");
        p3[2]->set_info("Three");

        // Sharing the pointer p3 with p1 and p2. Since p3 is pointing to an
        // array we have to put in the syntax as below. We can't write (p1 =
        // p3). We could have wrote this if p3 was pointing to a single object.
        p1 = p3[0];
        p2 = p3[1];

        // Note : We cannot use p1 (which is currently pointing at p3[0])
        // to access other objects of array pointed by p3. e.g. we cannot write
        // p1[1] becaause p1 is a single object pointer not an array pointer

        // Here inorder to get use_count(), we have to tell for which object
        // pointed by p3 do we need to get shared count for
        cout << "Shared Count : " << p3[0].use_count() << "\n";
        // The following command is same as above command because p3 is pointing
        // to the first object of the array. Note that we are using [->]
        // cout << "Shared Count : " << p3->use_count() << "\n";

        // Here the shared count of p3 is 2 and not 3 because while giving the
        // use_count command, the pointer p3 is pointing at p[0] i.e. cat named
        // 'one' so this function gives the use_count of cat named 'one' which
        // is also being pointed by p1. cat named 'two' is being pointed by p2
        // and p3. cat named 'three, is being pointed by p3 only
    }
    cout << "\nHere the scope has already ended and thus the unshared cat i.e. "
            "cat named 'three' has already been destroyed.\n";

    cout << "\nOther cats with shared pointers will get destroyed after this "
            "scope ends\n";

    return 0;
}