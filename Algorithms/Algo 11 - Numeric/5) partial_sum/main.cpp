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

    // Computes the partial sums of the elements in the subranges of the range
    // [first, last) and writes them to the range beginning at d_first

    vector<int> A(10), B, C;

    iota(A.begin(), A.end(), 1);
    print("First n numbers : ", A);

    partial_sum(A.begin(), A.end(), back_inserter(B));
    print("Sum of first n integers : ", B);

    auto mult = [](int x, int y) { return x * y; };
    partial_sum(A.begin(), A.end(), back_inserter(C), mult);
    print("Product of first n integers : ", C);

    return 0;
}