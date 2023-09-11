#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print(auto s, auto &A) {
    cout << s;
    int n = 1;
    for (auto &i : A) cout << i << (((++n & (n - 1)) == 0) ? " | " : " ");
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Pushes a new element inserted by push_back to its correct location in the
    // heap

    vector<int> A = {1, 2, 3, 4, 6, 7};
    print("Vector befor make_heap : ", A);

    make_heap(A.begin(), A.end());
    print("Vector after make_heap : ", A);

    A.push_back(5);
    print("Vector after push_back : ", A);

    push_heap(A.begin(), A.end());
    print("Vector after push_heap : ", A);

    return 0;
}