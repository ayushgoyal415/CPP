#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /* Arguments
    1, 2) First and last iterators to the ds from where you want to copy
    3) Iterator to beginning of the ds to which you want to copy the elements
    that satisfy the bool condition passed.
    4) Iterator to the beginning of the ds to which you want to copy the
    elements that do not satisfy the bool consition passed
    5) The bool condition based on which you want to create partitions
    */

    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, B, C;

    partition_copy(A.begin(), A.end(), back_inserter(B), back_inserter(C),
                   [](int x) { return x % 2 == 0; });
    for (auto &i : B) cout << i << " ";
    cout << "\n";
    for (auto &i : C) cout << i << " ";

    return 0;
}