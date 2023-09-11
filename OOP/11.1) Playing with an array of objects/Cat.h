#include <iostream>
using namespace std;

#ifndef CAT_H
#define CAT_H

#pragma once

class Cat {
   private:
    char name;

   public:
    Cat() { cout << "Cat Created\n"; };
    void set_name(char name) { this->name = name; };
    ~Cat() { cout << name << " Destroyed\n"; };
};

#endif