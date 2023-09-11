#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A = {0, 1, 0, 2, 3, 0, 4, 5}, B, C;

    // Arguments
    // 1, 2) start and end iterators to the ds from which you want to copy
    // 3) the beginning of the ds to which you want to copy
    // 4) the value of the elements not to copy, in remove_copy_if supply a
    // boolian condition instead

    remove_copy(A.begin(), A.end(), back_inserter(B), 0);
    remove_copy_if(A.begin(), A.end(), back_inserter(C),
                   [](int x) { return x % 2 == 0; });

    for (auto &i : B) cout << i << " ";
    cout << "\n";
    for (auto &i : C) cout << i << " ";

    return 0;
}