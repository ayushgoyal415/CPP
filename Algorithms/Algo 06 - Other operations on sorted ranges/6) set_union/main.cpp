#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Copies the elements present in one or both sorted ranges, to the target
    // ds. If same element is found m times in 1st sorted range and n times in
    // 2nd sorted range, then all m elements will be copied from 1st range,
    // preserving order, and then exactly max(n-m, 0) elements will be copied
    // from 2nd range, also preserving order.

    vector<int> A = {1, 1, 1, 2, 9};
    vector<int> B = {1, 2, 2, 2, 8};
    vector<int> C;

    set_union(A.begin(), A.end(), B.begin(), B.end(), back_inserter(C));

    auto print = [](auto s, auto &A) {
        cout << s;
        for (auto &i : A) cout << i << " ";
        cout << "\n";
    };

    print("Vector A : ", A);
    print("Vector B : ", B);
    print("Vector C : ", C);

    return 0;
}