#include <iostream>
#include <vector>
using namespace std;

int steps_in_grid(vector<int> &A, vector<int> &B) {
    if (A.size() == 1) return 0;
    int ans = 0;

    for (int i = 0; i < A.size() - 1; i++) {
        int diff_x = abs(A[i] - A[i + 1]);
        int diff_y = abs(B[i] - B[i + 1]);
        if (diff_x > diff_y)
            ans += diff_x;
        else
            ans += diff_y;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) cin >> B[i];

    cout << steps_in_grid(A, B);

    return 0;
}