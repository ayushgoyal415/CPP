#include <iostream>
using namespace std;

// Cannot do this as by doing this we are returning pointer to a local variable
// that does not exist anymore
// int *get_array(int n) {
//     int A[n] = {};
//     return A;
// }

// This is right way of returning arrays from functions
// New operator does not allow the memory to be deleted
// int *get_array(int n) {
//     int *p = new int[n];
//     return p;
// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int *p = get_array(5);

    // delete[] p;

    return 0;
}