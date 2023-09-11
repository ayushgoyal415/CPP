#include <iostream>
using namespace std;

#ifndef CAT_H
#define CAT_H

#pragma once

class Cat {
   private:
    bool happy = true;

    // Declaring a private data member (bool type)
    // Setting a default value for all objects (all cats, bool happy = true)
    // This implies that all cat objects will be happy to begin with
    // Private data members can't be accessed in main.cpp
    // These can be accessed by methods and constructors

   public:
    void speak();
    void make_sad();
    void make_happy();
};

#endif