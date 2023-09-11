#include <iostream>
#include <vector>
using namespace std;

void print(int idx, vector<int> &A, vector<int> &ds) {
    if (idx == A.size()) {
        for (auto &it : ds) cout << it << " ";
        cout << "\n";
        return;
    }
    ds.push_back(A[idx]);
    print(idx + 1, A, ds);
    ds.pop_back();
    print(idx + 1, A, ds);
}

int main() {
    vector<int> A{1, 2, 3}, ds;
    print(0, A, ds);
    return 0;
}