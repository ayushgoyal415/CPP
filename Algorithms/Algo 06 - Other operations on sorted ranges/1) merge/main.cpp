#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Merges two sorted ranges [first1, last1) and [first2, last2) into one
    // sorted range beginning at d_first.

    vector<int> A = {1, 8, 9, 5, 5, 2, 3, 3, 8, 4, 1, 2, 7, 6, 9, 4, 5};
    vector<int> B = {1, 2, 7, 6, 9, 4, 5, 8, 9, 5, 5, 2, 3, 3};
    vector<int> C;

    auto print = [](auto s, auto &A) {
        cout << s;
        for (auto &i : A) cout << i << " ";
        cout << "\n";
    };

    print("Unsorted Vector A : ", A);
    print("Unsorted Vector B : ", B);

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    print("Sorted Vector A : ", A);
    print("Sorted Vector B : ", B);

    merge(A.begin(), A.end(), B.begin(), B.end(), back_inserter(C));
    print("Merged Vector C : ", C);

    // Similarly there is an algorihtm inplace_merge
    // It is difficult to understand
    // It can be used to make merge_sort algorithm

    return 0;
}