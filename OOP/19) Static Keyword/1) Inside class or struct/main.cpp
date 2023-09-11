#include "Car.cpp"
#include "Car.h"

//-------------------------------------------------------------------------------
// WHAT DOES STATIC KEYWORD DO?
//-------------------------------------------------------------------------------
// Static allocates memory on heap which acts as class attribute.

// 'Static' keyword allows you to create data types and methods which can be
// accessed without refering to a class object.

// Static data types, like non-static data types, also maintain a state. The
// only difference being that they maintain state for the whole class whereas
// non-static data types maintain separate state for each class object. Thus
// static variables are know as class variables.

// As already defined, a static data member is a class attribute rather than an
// object attribute; so for every object, the value of a static data type is
// same. All objects of a class share only one copy of each static memeber.
//-------------------------------------------------------------------------------

//-------------------------------------------------------------------------------
// BEST WAYS OF DECLARING STATIC DATA TYPES AND METHODS -
//-------------------------------------------------------------------------------
// Always declare static data types in such a way that the user can access them
// outside of the class. Getting access without refering to a class object is
// the main reason for using a 'staic' data type in the first place. But at the
// same time, we also need to ensure that the user is not allowed to change the
// value of a static data type otherwise it no longer acts as a class attribute.
// There are 2 ways of achieving it :
// - public : static const data type
// - private : static data type clubbed with public : static method
//-------------------------------------------------------------------------------

//-------------------------------------------------------------------------------
// 1) public : static const data type
//-------------------------------------------------------------------------------
// Used while declaring data types -
// - whose values you don't want to be changed by any means (e.g. PI)
// - whose access is possible oustside of class without refering to its object
//-------------------------------------------------------------------------------
// Note : Such data types must be initialised at the time of declaration
//-------------------------------------------------------------------------------

//-------------------------------------------------------------------------------
// 2)  private : static non-const data type
//-------------------------------------------------------------------------------
// Used while declaring data types -
// - whose values you don't want to be changed by the user but want them to be
//   changed by the class (e.g. count)
// - whose access is possible oustside of class without refering to its object :
//  - Although these data types cannot be accessed outside of class as they are
//    private, but we can declare a public : static method to provide its access
//  - public : static methods, like public : static data members, can be
//    accessed by user without refering to class object.
//-------------------------------------------------------------------------------
// Note : Such data types cannot be initialised at the time of declaration
// These are usually initialised in src.cpp file with the value of 0.
//-------------------------------------------------------------------------------

// Note: Static method, like static data type, is a class attribute. All objects
// share only one copy. So it makes sense that a static method has access only
// to other static data members. Hence they can only access static data types.

int main() {
    // Accessing static data type of class Car without refering to Car object
    cout << Car::S_BUDGET << '\n';

    // Accessing static method of class Car without refering to Car object
    cout << Car::count() << '\n';

    // Changing value of non-const static method using class
    Car* p = new Car[10];
    cout << Car::count() << '\n';

    // Differentiating between static and non static data types
    // All objects have one copy of static data types. Each object has its own
    // copy of non static data type.
    p[0].get_info();
    p[1].get_info();

    delete[] p;

    //--------------------------------------------------------------------------
    // MISSION ACCOMPLISHED
    //--------------------------------------------------------------------------
    // Note that although we have access values of both 'BUDGET' and 'COUNT',
    // but we cannot modify any of these values. This is because 'BUDGET' is a
    // const value and 'COUNT' is wrapped in a static method.
    //--------------------------------------------------------------------------

    return 0;
}