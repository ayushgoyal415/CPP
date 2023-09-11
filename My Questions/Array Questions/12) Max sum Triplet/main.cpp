#include <limits.h>

#include <iostream>
#include <set>
#include <vector>

using namespace std;

vector<int> get_vec() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    return A;
}

int max_sum_triplet(vector<int> &A) {
    int n = A.size();

    vector<int> R(n, A[n - 1]);
    for (int i = n - 2; i >= 0; i--) R[i] = max(A[i], R[i + 1]);

    set<int> L{A[0]};
    int msf = INT_MIN;

    for (int i = 1; i < n - 1; i++) {
        L.insert(A[i]);
        auto it = L.find(A[i]);
        if (it != L.begin() && A[i] < R[i]) msf = max(msf, A[i] + *--it + R[i]);
    }
    return msf;
}

int main() {
    vector<int> A(get_vec());
    cout << max_sum_triplet(A);
    return 0;
}