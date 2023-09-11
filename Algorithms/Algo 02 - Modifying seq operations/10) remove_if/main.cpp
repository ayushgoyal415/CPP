#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    auto it = remove_if(A.begin(), A.end(), [](int x) { return x % 2 == 0; });
    A.erase(it, A.end());

    for (auto &i : A) cout << i << " ";

    return 0;
}