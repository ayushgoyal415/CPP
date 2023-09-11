#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A = {3, 4, 5};
    vector<int> B = {1, 2, 0, 0, 0};

    copy_backward(A.begin(), A.end(), B.end());
    for (auto &i : B) cout << i << " ";
    cout << "\n";

    return 0;
}