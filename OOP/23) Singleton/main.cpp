#include <iostream>
using namespace std;

// Singleton allows only one intance of a class
// That is you cannot make multiple objects using that class
// But you can update the one object which is provided for different
// functionality

// It does so by doing the following :
// 1) making constructor private
// 2) constructing one intance of the class within the class
// 3) returing the intance using get function which is declared static so that
// it can be called without refering to an object.
// 4) deleting copy ocnstructor so that the intance cannot be created by copying

class Random {
   private:
    Random(){};
    float rand_number = rand();

   public:
    Random(const Random&) = delete;
    static Random& get_random() {
        static Random obj;
        return obj;
    };
    float function() { return rand_number; };
};

int main() {
    Random& A = Random::get_random();
    cout << A.function() << '\n';
    return 0;
}