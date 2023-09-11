#include <iostream>
#include <vector>
using namespace std;

void print(int idx, vector<int> &A, vector<int> &ds, int sum, const int k) {
    if (idx == A.size()) {
        if (sum == k) {
            for (auto &it : ds) cout << it << " ";
            cout << "\n";
        }
        return;
    }
    ds.push_back(A[idx]);
    sum += A[idx];
    print(idx + 1, A, ds, sum, k);
    ds.pop_back();
    sum -= A[idx];
    print(idx + 1, A, ds, sum, k);
}

int main() {
    vector<int> A{1, 2, 1}, ds;
    print(0, A, ds, 0, 2);
    return 0;
}