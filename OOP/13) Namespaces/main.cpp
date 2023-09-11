#include "Cat.cpp"
#include "Cat.h"

// Can use a default namespace e.g. by writing using namespace ag;

int main() {
    // Using namespace 'ag'
    ag::Cat cat1;
    ag::Dog dog1;
    cat1.get_name(), cat1.speak();
    dog1.get_name(), dog1.speak();

    // Using namespace 'aj'
    aj::Cat cat2;
    aj::Dog dog2;
    cat2.get_name(), cat2.speak();
    dog2.get_name(), dog2.speak();

    // Using a class which does not have a confusing name
    // Even when consfusion is not there, we have to mentio the namespace in
    // which the class is defined
    aj::Cow cow1;
    cow1.get_name(), cow1.speak();

    return 0;
}