#include <iostream>
using namespace std;

#ifndef CAT_H
#define CAT_H

#pragma once

class Cat {
   private:
    string name;

    // Making a separate private section for private methods
    // Although we can place methods with private data members as well
   private:
    string reverse_name();  // Declaring a private method

   public:
    Cat(string name) : name(name) {}
    string get_name();

    // Making a duplicate public method that can access private method
    string dup_reverse_name();
};

#endif