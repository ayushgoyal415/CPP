#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Permutes the range [first, last) into the next permutation, where the set
    // of all permutations is ordered lexicographically with respect to
    // operator< or comp. Returns true if such a "next permutation" exists;
    // otherwise transforms the range into the lexicographically first
    // permutation (as if by std::sort(first, last, comp)) and returns false.

    // So, this function computes permutation and also returns a boolian value

    vector<int> A{1, 5, 2, 3, 4};

    // Sorting to start permuting from start
    sort(A.begin(), A.end());

    // Using do while loop to print all of the permutations including the
    // beginning one

    do {
        for (auto &i : A) cout << i << " ";
        cout << "\n";
    } while (next_permutation(A.begin(), A.end()));

    return 0;
}