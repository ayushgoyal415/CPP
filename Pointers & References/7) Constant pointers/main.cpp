#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // Declaring a pointer that is constant in its value
    // That is, it can't change the value of the thing to which it is pointing
    // (Cant do this : *p = 100);

    // const int* p = A;
    // cout << *p << "\n";
    // cout << p[5] << "\n";
    // p++;
    // cout << *p << "\n";

    // Declaring a pointer that is constant in its location
    // That is, it can't change its position (Can't do this : p++)

    // int* const p = A;
    // cout << *p << "\n";
    // cout << p[5] << "\n";
    // *p = 100;
    // cout << *p << "\n";

    // Declaring a pointer that is constant in its location & value
    // (Can't do both *p = 100 and p++)

    // const int* const p = A;
    // cout << *p << "\n";
    // cout << p[5] << "\n";

    return 0;
}