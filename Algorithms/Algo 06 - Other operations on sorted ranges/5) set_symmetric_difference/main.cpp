#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Copies the elements that are found in either of the two sorted ranges,
    // but not in both of them, to the target ds. If some element is found m
    // times in 1st range and n times in 2nd range, it will be copied to ds
    // exactly abs(m-n) times. If m>n, then the last m-n of those elements are
    // copied from 1st range, otherwise the last n-m elements are copied from
    // 2nd range. The resulting range cannot overlap with either of the input
    // ranges.

    vector<int> A = {1, 2, 3, 4, 5};
    vector<int> B = {1, 2, 3, 3, 6};
    vector<int> C;

    set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(),
                             back_inserter(C));

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