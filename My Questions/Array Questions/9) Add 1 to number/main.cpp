#include <iostream>
#include <vector>
using namespace std;

vector<int> add_one(vector<int> &A) {
    int n = A.size(), z = 0;
    bool q9 = 1, q0 = 1;

    for (int i = 0; i < n; i++) {
        if (A[i] != 0) q0 = 0;
        if (!q0 && A[i] != 9) q9 = 0;
        if (q0) z++;
    }

    vector<int> a(1, 1);
    if (q0) return a;

    a.clear();
    if (q9) a.resize(n - z + 1);
    if (!q9) a.resize(n - z);

    int k = a.size() - 1;
    int c = 1;
    for (int i = n - 1; i >= z; i--, k--) {
        if (A[i] + c == 10) {
            a[k] = 0;
        } else {
            a[k] = A[i] + c;
            c = 0;
        }
    }

    if (q9) a[0] = 1;

    return a;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    vector<int> a(add_one(A));
    for (int i = 0; i < a.size(); i++) cout << a[i] << " ";

    return 0;
}