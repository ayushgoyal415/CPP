#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void print(auto s, auto &A) {
    cout << s;
    for (auto &i : A) cout << i << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Computes the differences between the second and the first of each
    // adjacent pair of elements of the range [first, last) and writes them to
    // the range beginning at d_first + 1.

    vector<int> A = {1, 4, 7, 10, 13};
    vector<int> B;

    adjacent_difference(A.begin(), A.end(), back_inserter(B));
    print("Vector A : ", A);
    print("Vector B : ", B);

    // Can also get fibonacci series using this but is difficult to understand

    return 0;
}