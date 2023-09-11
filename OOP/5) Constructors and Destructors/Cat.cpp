#include "Cat.h"

// Implementation of constructor
Cat::Cat() { cout << "Cat Created\n"; }

// Implementation of destructor
Cat::~Cat() { cout << "Cat named " << name << " destoryed\n"; }

void Cat::set_name(string name) { this->name = name; }