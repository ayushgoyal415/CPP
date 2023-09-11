#include "Cat.cpp"
#include "Cat.h"

int main() {
    Cat cat1;
    cat1.set_name("Bob");
    cat1.get_name();


    // Creating a new cat using new operator and default constructor
    Cat *pcat2 = new Cat;

    pcat2->get_name();
    pcat2->set_name("Tom");
    pcat2->get_name();


    // Creating a new cat using new operator and custom constructor
    Cat *pcat3 = new Cat("Freddy");

    pcat3->get_name();
    pcat3->set_name("Julia");
    pcat3->get_name();


    // Objects created using new operator need to be deleted explicitly
    delete pcat2;
    delete pcat3;

    return 0;
}