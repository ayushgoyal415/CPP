#include <iostream>
using namespace std;

#ifndef MACHINE_H
#define MACHINE_H

#pragma once

class Machine {
   private:
    int id = -1;

   public:
    Machine(){ cout << "Machine no argument constructer called.\n"; };
    void get_info() { cout << "Id : " << id << "\n"; };
};

class Vehicle : public Machine {
   public:
    Vehicle() { cout << "Vehicle no argument constructer called.\n"; };
    // We can't access private data members of a superclass in a subclass.
    // Eg. We can't write the following : void set_id(int id) { this->id = id; }
    // But we can access them indireclty via public methods of superclass.
};

class Car : public Vehicle {
   public:
    Car() { cout << "Car no argument constructer called.\n"; };
};

#endif