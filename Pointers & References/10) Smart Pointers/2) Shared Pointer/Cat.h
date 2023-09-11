#include <iostream>
using namespace std;

#ifndef CAT_H
#define CAT_H

#pragma once

class Cat {
   private:
    string name = "";

   public:
    Cat() { cout << "Cat Constructed\n"; };
    Cat(string name) : name(name) { cout << "Cat Constructed\n"; };
    void set_info(string name) { this->name = name; };
    virtual ~Cat() { cout << "Cat named " << name << " Destructed\n"; };
};

#endif