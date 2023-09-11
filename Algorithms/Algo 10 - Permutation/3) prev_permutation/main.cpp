#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Transforms the range [first, last) into the previous permutation from the
    // set of all permutations that are lexicographically ordered with respect
    // to operator< or comp. Returns true if such permutation exists, otherwise
    // transforms the range into the last permutation (as if by std::sort(first,
    // last); std::reverse(first, last);) and returns false.

    vector<int> A{1, 5, 2, 3, 4};

    // Sorting to start permuting from end
    sort(A.begin(), A.end(), [](int x, int y) { return x > y; });

    // Using do while loop to print all of the permutations including the
    // last one

    do {
        for (auto &i : A) cout << i << " ";
        cout << "\n";
    } while (prev_permutation(A.begin(), A.end()));

    return 0;
}