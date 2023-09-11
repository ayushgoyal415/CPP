#include <iostream>
using namespace std;

#ifndef CAT_H
#define CAT_H

#pragma once

class Cat {
   private:
    string name = "NULL";
    int age = -1;

   public:
    // In-line implementation of default unloaded constructor
    Cat(){};

    // Prototype of custom overloaded constructor
    Cat(string new_name);

    // Creating a second custom constructor (with in-line implementation)
    Cat(string new_name, int new_age) {
        name = new_name;
        age = new_age;
    };

    void get_info();
};

#endif