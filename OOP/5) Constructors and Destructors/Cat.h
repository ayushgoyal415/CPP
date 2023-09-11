#include <iostream>
using namespace std;

#ifndef CAT_H
#define CAT_H

#pragma once

class Cat {
   private:
    string name;

   public:
    Cat();   // Prototype of constructor
    ~Cat();  // Prototype of destructor
    void set_name(string);
};

#endif