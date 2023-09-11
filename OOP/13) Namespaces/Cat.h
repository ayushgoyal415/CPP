#include <iostream>
using namespace std;

#ifndef CAT_H
#define CAT_H

#pragma once
// Declaring two classes (Cat and Dog) in each of the two namespaces (ag and aj)
// Declaring an additional class Cow in namespace aj
namespace ag {
class Cat {
   private:
    string name = "Tom";

   public:
    Cat(){};
    ~Cat(){};
    void speak();
    void get_name();
};

class Dog {
   private:
    string name = "Fred";

   public:
    Dog(){};
    ~Dog(){};
    void speak();
    void get_name();
};
}  // namespace ag

namespace aj {

class Cat {
   private:
    string name = "Tommy";

   public:
    Cat(){};
    ~Cat(){};
    void speak();
    void get_name();
};

class Dog {
   private:
    string name = "Freddy";

   public:
    Dog(){};
    ~Dog(){};
    void speak();
    void get_name();
};

class Cow {
   private:
    string name = "Bholi";

   public:
    Cow(){};
    ~Cow(){};
    void speak();
    void get_name();
};
}  // namespace aj

#endif