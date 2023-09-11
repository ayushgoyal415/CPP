#include <iostream>
using namespace std;

// Private data members can be inherited but cannot be accessed directly by its
// derived classes. They can however be accessed using public or protected
// methods of the base class.

// Protected data members can be inherited and accessed in directly by derived
// class but not be objects of derived class. However they can indirectly be
// accessed by objects of derived class by using public methods.

// Public data members can be inherited freely and accessed by derived class.

// Take home : Only the protected and public data members of a base class can be
// accessed in a derived class. Only public members can be accessed by objects.

class Base {
   private:
    int pri_base = 1;

   protected:
    int pro_base = 2;

   public:
    int pub_base = 3;
    void info() {
        cout << "Base class access to : " << pri_base << ", " << pro_base
             << ", " << pub_base << "\n";
    };
};

// Here the inheritence mode is public. This means that the class D1 is
// accessing all the data members (that it can access) from class base and
// making these public for use (i.e. any class and objects derived from it can
// access these members)
class D1 : public Base {
   private:
    int pri_D1 = 4;

   protected:
    int pro_D1 = 5;

   public:
    int pub_D1 = 6;
    void info() {
        cout << "D1 class access to : " << pro_base << ", " << pub_base << ", "
             << pri_D1 << ", " << pro_D1 << ", " << pub_D1
             << " (Inherietd Data members remained : public)\n";
    };
};

// Here the word protected means that the class D2 is accessing all the data
// members (that it can access) from class D1 and making these protected for
// use (i.e. any class derived from it can access these members but not objects)
class D2 : protected D1 {
   private:
    int pri_D2 = 7;

   protected:
    int pro_D2 = 8;

   public:
    int pub_D2 = 9;

    void info() {
        cout << "D2 class access to : " << pro_base << ", " << pub_base << ", "
             << pro_D1 << ", " << pub_D1 << ", " << pri_D2 << ", " << pro_D2
             << ", " << pub_D2
             << " (Inherietd Data members made : protected)\n";
    };
};

// Here the word private means that the class D3 is accessing all the data
// members (that it can access) from class D2 and making these private for
// inheritance (i.e. any class or object derived from it cannot access these)
class D3 : private D2 {
   private:
    int pri_D3 = 10;

   protected:
    int pro_D3 = 11;

   public:
    int pub_D3 = 12;
    void info() {
        cout << "D3 class access to : " << pro_base << ", " << pub_base << ", "
             << pro_D1 << ", " << pub_D1 << ", " << pro_D2 << ", " << pub_D2
             << ", " << pri_D3 << ", " << pro_D3 << ", " << pub_D3
             << " (Inherietd Data members made : private)\n";
    };
};

class D4 : public D3 {
   private:
    int pri_D4 = 13;

   protected:
    int pro_D4 = 14;

   public:
    int pub_D4 = 15;

    void info() {
        cout << "D4 class access to : " << pro_D3 << ", " << pub_D3 << ", "
             << pri_D4 << ", " << pro_D4 << ", " << pub_D4
             << " (Inherietd Data members remained : public)\n";
    };
};

int main() {
    // Note : Only the public data members of a class can be accessed here

    Base b;
    D1 d1;
    D2 d2;
    D3 d3;
    D4 d4;

    b.info(), d1.info(), d2.info(), d3.info(), d4.info();

    cout << "\n\n";

    cout << "Base oject access to : " << b.pub_base << "\n";
    cout << "D1 oject access to : " << d1.pub_base << ", " << d1.pub_D1 << "\n";
    cout << "D2 oject access to : " << d2.pub_D2 << "\n";
    cout << "D3 oject access to : " << d3.pub_D3 << "\n";
    cout << "D4 oject access to : " << d4.pub_D3 << ", " << d4.pub_D4 << "\n";

    return 0;
}