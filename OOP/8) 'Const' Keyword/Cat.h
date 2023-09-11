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
    ~Cat(){};

    // Declaring a constant method
    void get_name() const { cout << "Name : " << name << "\n"; };

    void set_name(string name) { this->name = name; };
    // Can't declare a constant method that changes name like shown below :
    // void set_name(string name) const { this->name = name; };

    // Note : Ideally we should declare all methods as constant if they don't
    // change any instant variables to reduce bugs
};

#endif