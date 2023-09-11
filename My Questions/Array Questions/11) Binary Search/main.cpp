#include <iostream>
#include <vector>
using namespace std;

int search_number_idx(vector<int> &A, int val) {
    int s = 0;
    int e = A.size() - 1;

    while (s < e) {
        int m = (s + e) / 2;
        if (A[s] == val) return s;
        if (A[m] == val) return m;
        if (A[e] == val) return e;
        if (A[m] < val) s = m + 1;
        if (A[m] > val) e = m - 1;
    }
    return -1;
}

int main() {
    int n, val;

    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    cin >> val;

    cout << search_number_idx(A, val);

    return 0;
}