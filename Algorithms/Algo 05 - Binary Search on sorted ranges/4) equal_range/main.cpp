#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Reurns a a pair of iterators defining the wanted range. The
    // first pointing to the first element that is not less than value and the
    // second pointing to the first element greater than value.

    vector<int> A = {1, 2, 3, 3, 3, 4, 5};

    auto it = equal_range(A.begin(), A.end(), 3);

    for (auto st = it.first; st != it.second; st++) cout << *st << " ";

    return 0;
}