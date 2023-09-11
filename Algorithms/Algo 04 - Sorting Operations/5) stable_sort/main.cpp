#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print(vector<pair<int, int>> &A) {
    // for (int i = 0; i < A.size(); i++)
    //     cout << A[i].first << " " << A[i].second << "\n";
    cout << "Pair 1 : ";
    for (auto &i : A) cout << i.first << " ";
    cout << "\nPair 2 : ";
    for (auto &i : A) cout << i.second << " ";
    cout << "\n\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Stable algorithm maintains the relative order of equal elements
    // This can be helpful when a ds is carrying multiple values at each level
    // e.g. vector pairs

    vector<pair<int, int>> A = {{1, 1}, {2, 2}, {3, 3}, {3, 4}, {5, 5}};
    print(A);

    stable_sort(A.begin(), A.end(),
                [](auto x, auto y) { return x.first > y.first; });
    print(A);

    cout << "Note that vector pair (3,4) comes after vector pair (3,3) after "
            "sorting\n\n";

    return 0;
}