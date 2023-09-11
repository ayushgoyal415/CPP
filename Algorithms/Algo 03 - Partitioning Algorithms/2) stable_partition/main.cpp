#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Same as partion but maintains relative order among elements
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    stable_partition(A.begin(), A.end(), [](int x) { return x % 2 == 0; });

    for (auto &i : A) cout << i << " ";
    cout << "\n";

    return 0;
}