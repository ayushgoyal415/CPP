#include <iostream>
#include <vector>
using namespace std;

bool print(int idx, vector<int> &A, vector<int> &ds, int sum, int k) {
    if (idx == A.size()) {
        if (sum == k) {
            for (auto &it : ds) cout << it << " ";
            cout << "\n";
            return true;
        }
        return false;
    }
    ds.push_back(A[idx]);
    sum += A[idx];
    if (print(idx + 1, A, ds, sum, k)) return true;
    ds.pop_back();
    sum -= A[idx];
    if (print(idx + 1, A, ds, sum, k)) return true;

    return false;
}

int main() {
    vector<int> A{2, 1, 2, 1}, ds;
    int idx = 0, sum = 0;
    const int k = 2;

    print(idx, A, ds, sum, k);

    return 0;
}