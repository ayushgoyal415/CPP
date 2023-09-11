#include <iostream>
using namespace std;

#ifndef CAT_H
#define CAT_H

#pragma once

class Cat {
   private:
    string name = "";

   public:
    Cat() {};
    Cat(string name) : name(name) {};
    void set_info(string name) { this->name = name; };
    void get_info() { cout << "Name : " << name << "\n"; };
    virtual ~Cat() {};
};

#endif