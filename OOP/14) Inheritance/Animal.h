#include <iostream>
using namespace std;

#ifndef ANIMAL_H
#define ANIMAL_H

#pragma once

class Animal {
   private:
    string name = "Jaanvar";

   public:
    void speak();
};

// Class Cat is inheriting all the traits that class Animal has
class Cat : public Animal {
   public:
    void work();
};

// Class Tiger is inheriting all the traits that class Cat has
class Tiger : public Cat{
    public:
    void attack();
};

#endif