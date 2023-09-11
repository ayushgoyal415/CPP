#include <iostream>
using namespace std;

#ifndef CAR_H
#define CAR_H

#pragma once

class Car {
   private:
    // Declaring a non static data member
    int id = 0;

   public:
    // Declaring a const static data type
    static const long long S_BUDGET = 100000000000;

   private:
    // Declaring a non-const static data type
    static int s_count;

   public:
    // Declaring a static method
    static int count();

   public:
    // Declaring a non static method
    void get_info();

   public:
    Car();
    ~Car();
};

#endif