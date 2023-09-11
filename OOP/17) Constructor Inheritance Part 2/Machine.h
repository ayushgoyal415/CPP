#include <iostream>
using namespace std;

#ifndef MACHINE_H
#define MACHINE_H

#pragma once

class Machine {
   private:
    int id = -1;

   public:
    Machine() { cout << "Machine no argument constructer called.\n"; }
    Machine(int id) : id(id) {
        cout << "Machine parameterized constructor called.\n";
    }
    void get_info() { cout << "Id : " << id << "\n"; }
};
class Vehicle : public Machine {
   public:
    Vehicle() { cout << "Vehicle no argument constructer called.\n"; }
    // Setting a parameterized constructor for subclass which accepts an
    // argument as integer data type. We can then pass the integer to to a
    // constructor in superclass that also accepts an integer. This helps us to
    // run parameterized superclass constructor in a subclass
    Vehicle(int id) : Machine(id) {
        cout << "Vehicle parameterized constructor called.\n";
    }
};

class Car : public Vehicle {
   public:
    Car() { cout << "Car no argument constructer called.\n"; }
    // Note : we can't call a supersuper class constructor directly
    // If want a subsubclass to have a parameterized constructor that can set
    // values of private data members from its super super class, then we have
    // to have a parameterized constructor of similar type in its direct
    // superclass to which we can pass the data type.
    // We can't write the following :
    // Car(int car_id) : Machine(car_id) {};
    Car(int id) : Vehicle(id) {
        cout << "Car parameterized constructor called.\n";
    }
};

#endif