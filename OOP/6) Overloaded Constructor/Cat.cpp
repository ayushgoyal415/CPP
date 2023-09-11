#include "Cat.h"

// Implementation of custom overloaded constructor
// Setting name of the object using values passed in parameters
Cat::Cat(string new_name) { name = new_name; }

void Cat::get_info() { cout << "Name : " << name << ", Age : " << age << "\n"; }