#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Constructs a sorted range into target ds consisting of elements
    // that are found in both sorted ranges 1 and 2. If some element is found m
    // times in 1st range and n times in 2nd range, the first min(m, n) elements
    // will be copied from the first range to the destination range. The order
    // of equivalent elements is preserved. The resulting range cannot overlap
    // with either of the input ranges.

    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> B = {3, 3, 5, 5, 7, 7};
    vector<int> C;

    set_intersection(A.begin(), A.end(), B.begin(), B.end(), back_inserter(C));

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