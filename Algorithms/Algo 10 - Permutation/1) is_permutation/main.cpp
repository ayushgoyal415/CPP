#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A = {1, 2, 3, 4, 5};
    vector<int> B = {3, 5, 2, 1, 4};
    vector<int> C = {1, 2, 3, 4, 9};

    cout << is_permutation(A.begin(), A.end(), B.begin(), B.end()) << "\n";
    cout << is_permutation(A.begin(), A.end(), C.begin(), C.end()) << "\n";

    return 0;
}