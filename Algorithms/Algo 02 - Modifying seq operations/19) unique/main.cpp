#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print(auto &A) {
    for (auto &i : A) cout << i << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A = {1, 2, 3, 4, 3, 3, 3, 5, 6, 7, 4, 4, 4, 8, 9, 10};

    // Returns logical iterator pointing to consecutively repeated elements
    // It only finds the repeated elements placed consecutively thus the ds may
    // not be entirely unique even after the operation

    auto it = unique(A.begin(), A.end());
    A.erase(it, A.end());
    print(A);  // Note : Consecutive duplicates are removed but still 3 and 4
               // repeats twice

    // For making a ds completely unique use sort and they apply unique
    // Sorting brings all the duplicates at consecutive positions
    sort(A.begin(), A.end());
    auto it2 = unique(A.begin(), A.end());
    A.erase(it2, A.end());
    print(A);

    return 0;
}