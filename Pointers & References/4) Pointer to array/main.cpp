#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string A[] = {"One", "Two", "Three"};
    int n = sizeof(A) / sizeof(A[0]);

    for (int i = 0; i < n; i++) cout << A[i] << " ";
    cout << "\n";

    // Declaring pointer to the first element of an array
    string *p = &A[0];  // Can also use (string *p = A)

    // Note : A pointer to an array does not know the size of the data it is
    // pointing at. Calling out sizeof() on a pointer returns the size of the
    // pointer which by default in this compiler is set to 4
    cout << "Pointer size : " << sizeof(p) << "\n";

    return 0;
}