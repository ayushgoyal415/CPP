#include <iostream>
using namespace std;

#ifndef CAT_H
#define CAT_H

#pragma once

class Cat {
   private:
    string name;

   public:
    Cat(){};
    Cat(string name) : name(name){};
    void set_name(string name);
    void get_name();
    ~Cat(){};
};

#endif