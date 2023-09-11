#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Returns a bool value
    vector<int> A = {1, 2, 3, 4, 5};

    cout << binary_search(A.begin(), A.end(), 2) << "\n";
    cout << binary_search(A.begin(), A.end(), 6) << "\n";

    return 0;
}