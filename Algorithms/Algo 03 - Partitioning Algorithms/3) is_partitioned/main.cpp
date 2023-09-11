#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Checks if the given range is partitioned as per condition and returns a
    // bool value
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << is_partitioned(A.begin(), A.end(), [](int x) { return x % 3 == 0; })
         << "\n";

    partition(A.begin(), A.end(), [](int x) { return x % 3 == 0; });

    cout << is_partitioned(A.begin(), A.end(), [](int x) { return x % 3 == 0; })
         << "\n";

    return 0;
}