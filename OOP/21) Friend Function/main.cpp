#include <iostream>
using namespace std;

class Complex {
   private:
    int r, i;

   public:
    Complex(){};
    Complex(int r, int i) : r(r), i(i){};
    void getinfo() { cout << "Real : " << r << ", Imag : " << i << "\n"; };

    // Declaring a prototype of friend function
    friend Complex add(Complex const &c1, Complex const &c2);

    // Declaring a prototype of friend function with operator overloading
    friend Complex operator+(Complex const &c1, Complex const &c2);
};

// Implementing friend function outside class and yet it can access its private
// data memebers
Complex add(Complex const &c1, Complex const &c2) {
    Complex temp;
    temp.r = c1.r + c2.r;
    temp.i = c1.i + c2.i;
    return temp;
}

// Implementing friend function with operator overloading
Complex operator+(Complex const &c1, Complex const &c2) {
    Complex temp;
    temp.r = c1.r + c2.r;
    temp.i = c1.i + c2.i;
    return temp;
}

int main() {
    Complex c1(3, 5);
    Complex c2(4, 7);

    // Calling friend function
    // Note that no object is actually needed to call a friend function
    // As you can see we are directly writing add but not c1.add or something
    Complex c3 = add(c1, c2);
    c3.getinfo();

    // Calling friend function with operator overloading
    Complex c4 = c1 + c2;
    c4.getinfo();

    return 0;
}