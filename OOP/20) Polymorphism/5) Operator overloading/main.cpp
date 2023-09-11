#include <iostream>
using namespace std;

class Complex {
   private:
    int r;
    int i;

   public:
    Complex(){};
    Complex(int r, int i) : r(r), i(i){};
    void getinfo() { cout << "Real : " << r << ", Imag : " << i << "\n"; };

    // In this example,this function is called by c1 to which c2 is being added
    // So here &c is c2
    Complex operator+(Complex &c) {
        Complex temp;
        // Complex temp is going to return into c3

        temp.r = r + c.r;
        temp.i = i + c.i;
        // temp.r is final real value of c3
        // r is the real no. of the function calling this operator i.e, c1
        // c.r is the real no. of the object being added to the calling
        // function i.e, c2

        return temp;
    }
    ~Complex(){};
};

int main() {
    Complex c1(3, 5);
    Complex c2(4, 7);

    Complex c3;
    c3 = c1 + c2;
    c3.getinfo();

    return 0;
}