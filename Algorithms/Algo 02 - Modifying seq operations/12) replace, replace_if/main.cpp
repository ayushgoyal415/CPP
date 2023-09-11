#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A = {1, 2, 3, 4, 5, 0, 0, 0, 0};

    replace(A.begin(), A.end(), 0, 2);
    for (auto &i : A) cout << i << " ";
    cout << "\n";

    replace_if(
        A.begin(), A.end(), [](int x) { return x % 2 == 0; }, 9);
    for (auto &i : A) cout << i << " ";
    cout << "\n";

    return 0;
}