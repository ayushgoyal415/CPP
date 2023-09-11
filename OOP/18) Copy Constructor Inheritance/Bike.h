#include <iostream>
using namespace std;

#ifndef BIKE_H
#define BIKE_H

#pragma once

class Bike {
    string m_name;
    int m_speed = 0;

   public:
    Bike(){};
    Bike(string name, int speed) : m_name(name), m_speed(speed){};
    Bike(const Bike& A) : m_name(A.m_name), m_speed(A.m_speed){};
    void get_info() {
        cout << "Name : " << m_name << ", Speed : " << m_speed << '\n';
    };
    ~Bike(){};
};

class Honda : public Bike {
   public:
    Honda(){};

    // Constructor inheritance
    Honda(string name, int speed) : Bike(name, speed){};

    // Copy constructor inheritance
    Honda(const Honda& A) : Bike(A){};
    ~Honda(){};
};

#endif