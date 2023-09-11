#include <iostream>
#include <vector>
using namespace std;

void reverse_vector(vector<int> &A) {
    int n = A.size(), l = 0, r = n - 1;

    while (l < r) {
        A[r] ^= A[l];
        A[l] ^= A[r];
        A[r] ^= A[l];
        l++, r--;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    reverse_vector(A);

    for (int i = 0; i < n; i++) cout << A[i] << " ";

    return 0;
}