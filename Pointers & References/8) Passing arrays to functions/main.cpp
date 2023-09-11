#include <iostream>
using namespace std;

// DON'T USE THIS SYNTAX (it's wrong, size info is lost)
// void print(string A[]) {
//     // Note : Arrays are passed to functions as pointers by default
//     // void print(string A[]) is same as writing void print(string *A)
//     // So passing arrays without size loose the size information
//     // And the size passed is the size of a pointer (i.e. 4)
//     cout << "Size : " << sizeof(A) << "\n";
// }

// THIS IS CORRECT WAY (pass in the size along with array)
// void print(string A[], int n) {
//     // Here we are passing an array pointer with the size of array
//     // Note : (string A[]) syntax is passing a pointer to an array
//     // Note : Any changes made here will reflect in original array
//     for (int i = 0; i < n; i++) cout << A[i] << " ";
//     cout << "\n";
// }

// THIS IS ALSO A CORRECT WAY
// void print(string *A, int n) {
//     for (int i = 0; i < n; i++) cout << A[i] << " ";
//     cout << "\n";
// }

// THIS IS ALSO A CORRECT WAY BUT DIFFICULT ONE
// void print(string (&A)[3]) {
//     for (int i = 0; i < sizeof(A) / sizeof(string); i++) cout << A[i] << " ";
//     cout << "\n";
// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string A[] = {"One", "Two", "Three"};
    int n = sizeof(A) / sizeof(string);

    // print(A);

    return 0;
}