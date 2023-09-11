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

    // In-line implementation of a constructor using (this)
    Cat(string name) { this->name = name; };

    // In-line implementation of a constructor using (initialization list)
    Cat(string name, int age) : name(name), age(age){};

    void get_info();
};

#endif