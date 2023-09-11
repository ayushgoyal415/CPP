#include "Cat.h"

void Cat::get_info() { cout << "\nName : " << name << ", Age : " << age << "\n\n"; }

void Cat::set_info(string name, int age) {
    this->name = name;
    this->age = age;
}