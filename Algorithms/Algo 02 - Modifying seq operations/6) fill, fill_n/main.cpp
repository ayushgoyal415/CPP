#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    fill(A.begin() + 3, A.end() - 3, 9);
    for (auto &i : A) cout << i << " ";
    cout << "\n";

    fill_n(A.begin(), 5, 0);
    for (auto &i : A) cout << i << " ";
    cout << "\n";

    return 0;
}