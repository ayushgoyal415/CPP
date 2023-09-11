#include <iostream>
#include <vector>
using namespace std;

vector<int> user_vector() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    return A;
}

void reverse_vector(vector<int> &A, int l, int r) {
    if (l >= 0 && l < r && r < A.size()) {
        if (l >= r) return;

        A[l] ^= A[r];
        A[r] ^= A[l];
        A[l] ^= A[r];

        reverse_vector(A, l + 1, r - 1);
    }
}

int main() {
    vector<int> A(user_vector());

    int l, r;
    cin >> l >> r;
    reverse_vector(A, l, r);

    for (int i = 0; i < A.size(); i++) cout << A[i] << " ";

    return 0;
}