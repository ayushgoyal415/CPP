#include <iostream>
using namespace std;

#ifndef CAT_H
#define CAT_H

#pragma once

class Cat {
   private:
    string name = "";

   public:
    int age = -1;
    Cat() { cout << "Cat Constructed\n"; };
    Cat(string n, int a) : name(n), age(a) { cout << "Cat Constructed\n"; };
    void speak();
    void get_info();
    void set_info(string, int);
    virtual ~Cat() { cout << "Cat Destructed\n"; };
};

#endif