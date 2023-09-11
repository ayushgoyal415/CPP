#include <iostream>
using namespace std;

#ifndef CAT_H
#define CAT_H

#pragma once

class Cat {
   private:
    string name = "Null";
    int age = -1;

   public:
    Cat(){};
    // Before using any the below mentioned custom copy constructors, try using
    // the default copy constructor, it will by default copy and assign all the
    // data members of the previous object to the new copy object

    // Custom 1 : Copy constructor that does not copy any data member
    // Cat(const Cat& A){cout << "Copy constructor used\n";};

    // Custom 2 : Copy constructor that copies 1 data member
    // Cat(const Cat& A) : name(A.name) {cout << "Copy constructor used\n";};

    // Custom 3 : copy constructor that copies 2 data members
    // Cat(const Cat& A) : name(A.name), age(A.age) {
    //     cout << "Copy Constructor used\n";
    // };

    // Note : Copy constructors can also be used to copy methods which are
    // defined as constants

    // Preventing objects from copying by deleting copy constructor
    // Cat(Cat const& A) = delete;

    void get_info();
    void set_info(string name, int age);
};

#endif