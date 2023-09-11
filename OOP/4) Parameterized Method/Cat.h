#include <iostream>
using namespace std;

#ifndef CAT_H
#define CAT_H

#pragma once

class Cat {
   private:
    string name = "Undefined Yet";

   public:
    void get_name();
    void set_name(string);
};

#endif