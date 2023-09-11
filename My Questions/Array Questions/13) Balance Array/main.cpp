#include <iostream>
#include <vector>
using namespace std;

vector<int> get_vec() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    return A;
}

int balance_array(vector<int> &A) {
    int n = A.size(), ans = 0;

    // Constructing prefix and suffix difference arrays
    vector<int> pd(n);
    for (int i = 0; i < n; i++)
        if (i % 2 == 0)
            pd[i] = A[i];
        else
            pd[i] = -A[i];

    vector<int> sd = pd;
    int i = 1, k = n - 2;
    while (i < n - 1) {
        pd[i++] += pd[i - 1];
        sd[k--] += sd[k + 1];
    }

    // Comparing prefix and suffix differnce arrays
    if (sd[1] == 0) ans++;
    if (pd[n - 2] == 0) ans++;
    for (int i = 1; i < n - 1; i++)
        if (pd[i - 1] == sd[i + 1]) ans++;

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A(get_vec());

    cout << balance_array(A) << "\n";

    return 0;
}