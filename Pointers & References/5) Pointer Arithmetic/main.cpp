#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    const int n = sizeof(A) / sizeof(A[0]);

    int *p = A;

    // Pointers are stored as if they are an array
    // Calling out an index to the pointer
    cout << p[5] << "\n";

    // Applying arithmetic to pointers
    p++;
    cout << *p << "\n";
    cout << p[5] << "\n";

    return 0;
}