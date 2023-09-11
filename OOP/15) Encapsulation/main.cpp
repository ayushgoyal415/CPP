#include "Cat.cpp"
#include "Cat.h"

int main() {
    Cat cat1("Tom");
    cout << cat1.get_name() << "\n";

    // Can't use this function here unless it is moved to public section :
    // cout << cat1.reverse_name() << "\n";

    // The above function can be accessed indirectly via other methods defined
    // in public section
    cout << cat1.dup_reverse_name();

    return 0;
}