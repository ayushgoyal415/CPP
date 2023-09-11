#include "Cat.cpp"
#include "Cat.h"
// This function can help us to create multiple objects
Cat *create_cat(string name) {
    Cat *pcat = new Cat(name);
    return pcat;
}
int main() {
    Cat *p_tom = create_cat("Tom");
    p_tom->get_name();
    p_tom->set_name("Tommy");
    p_tom->get_name();

    delete p_tom;
    return 0;
}