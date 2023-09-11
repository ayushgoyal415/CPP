#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A = {1, 4, 2, 3, 5};

    cout << is_sorted(A.begin(), A.end()) << "\n";
    sort(A.begin(), A.end());
    cout << is_sorted(A.begin(), A.end()) << "\n";

    // Passing a bool comparator (to check if sorting is in descending order)
    // By default it checks if sorting is in ascending order
    cout << is_sorted(A.begin(), A.end(), [](int x, int y) { return x > y; })
         << "\n";

    return 0;
}