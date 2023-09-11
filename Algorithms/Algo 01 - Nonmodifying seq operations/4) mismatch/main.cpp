#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print(auto& A) {
    for (auto& i : A) cout << i << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Finds the first mismatch in the data structures passed
    // Arguments (starting iter of first data str, ending iter of first ds)
    // Arguments (starting iter of second data str, ending iter of second ds)
    // Returns (a pair of iterators belonging to first and second ds resp.)

    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {1, 2, 9, 9};
    // Getting a pair of iterators using mismatch function
    auto it = mismatch(A.begin(), A.end(), B.begin(), B.end());
    // Making new vectors using iterators recieved from mismatch function
    vector<int> C(A.begin(), it.first), D(B.begin(), it.second);
    print(C), print(D);

    // Using mismatch function to get pallindromic sequence in a string
    string s = "madmadam";
    auto iter = mismatch(s.begin(), s.end(), s.rbegin(), s.rend());
    string ans1(s.begin(), iter.first), ans2(s.rbegin(), iter.second);
    cout << ans1 << " " << ans2 << "\n";

    return 0;
}