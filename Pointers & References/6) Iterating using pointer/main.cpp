#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string A[] = {"One", "Two", "Three"};
    int n = sizeof(A) / sizeof(A[0]);

    string *p = A, *pcurr = &A[0], *pl = &A[n - 1];

    // Iterating through a pointer without actually changing the value it stores
    for (int i = 0; i < n; i++) cout << p[i] << " ";
    cout << "\n";

    // Iterating through an array by incrementing a pointer
    for (int i = 0; i < n; i++, p++) cout << *p << " ";
    cout << "\n";

    // Iterating through an array by using two pointers
    while (pcurr <= pl) cout << *pcurr++ << " ";
    cout << "\n";

    return 0;
}