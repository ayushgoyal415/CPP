#include <iostream>
#include <vector>
using namespace std;

vector<int> move_zeros(vector<int> &A) {
    int n = A.size(), i = 0, j = 0;

    for (i; i < n; i++)
        if (A[i] != 0) A[j++] = A[i];

    for (j; j < n; j++) A[j] = 0;

    return A;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    vector<int> a(move_zeros(A));
    for (int i = 0; i < a.size(); i++) cout << a[i] << " ";

    return 0;
}