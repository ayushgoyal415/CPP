#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Returns a pair of iterators pointing to min and max elements

    vector<int> A = {1, 2, 3, 4, 5};

    auto pr = minmax_element(A.begin(), A.end());

    cout << *(pr.first) << " " << *(pr.second) << "\n";

    return 0;
}