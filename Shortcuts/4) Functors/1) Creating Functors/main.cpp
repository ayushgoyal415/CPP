#include <iostream>
using namespace std;

// Creating a class containing an operator overloaded function
// Here the function call operator '()' is being overloaded
// This overloading of function call operator leads to construction of functors
class Squares {
   public:
    int operator()(int i) { return i * i; }
};

int main() {
    Squares sq;
    cout << sq(4) << "\n";

    //-------------------------------------------------------------------------
    // Functors are nothing but objects behaving as if they are functions
    //-------------------------------------------------------------------------
    // This syntax -> sq() can mislead us as we are calling a function named sq
    // But here 'sq' is not a function, it is an object name which belongs to a
    // class named 'Squares'. Here, sq is just calling an operator() overloaded
    // function implemented in class 'Squares'

    return 0;
}