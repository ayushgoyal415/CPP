#include "Cat.h"

void Cat::speak() { cout << "Mewww\n"; }

void Cat::get_info() { cout << "Name : " << name << ", Age : " << age << "\n"; }

void Cat::set_info(string name, int age) {
    this->name = name;
    this->age = age;
}