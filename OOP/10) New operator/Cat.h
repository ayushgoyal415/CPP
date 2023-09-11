#include <iostream>
using namespace std;

#ifndef CAT_H
#define CAT_H

#pragma once

class Cat {
   private:
    string name;

   public:
    Cat();
    Cat(string name);
    ~Cat();
    void set_name(string name);
    void get_name();
};

#endif