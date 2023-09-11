#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Computes inner product (i.e. sum of products)
    // for e.g for ranges (0,2,4) and (1,3,5) the inner product will be
    //(0*1 + 2*3 + 4*5) i.e 26

    vector<int> A = {0, 2, 4}, B = {1, 3, 5};

    // Taking initial value as 0 because we adding the multiplied values
    // basically
    int ans = inner_product(A.begin(), A.end(), B.begin(), 0);
    cout << ans << "\n";

    return 0;
}