#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Using reverse
    vector<int> A = {1, 2, 3, 4, 5};
    reverse(A.begin(), A.end());
    for (auto &i : A) cout << i << " ";
    cout << "\n";

    // Using reverse_copy
    vector<int> B = {1, 2, 5, 4, 3};
    vector<int> C = {1, 2, 0, 0, 0};
    reverse_copy(B.begin() + 2, B.end(), C.begin() + 2);
    for (auto &i : C) cout << i << " ";
    cout << "\n";

    return 0;
}