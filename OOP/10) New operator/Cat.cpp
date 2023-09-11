#include "Cat.h"

Cat::Cat() { cout << "Animal Created by default constructor\n"; }

Cat::Cat(string name) : name(name) {
    cout << "Animal Created by custom constructor\n";
}

Cat::~Cat() { cout << name << " Destroyed\n"; }

void Cat::get_name() { cout << "Name : " << name << "\n"; }

void Cat::set_name(string name) { this->name = name; }