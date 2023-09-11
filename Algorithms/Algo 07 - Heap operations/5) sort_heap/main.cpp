#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A = {5, 2, 7, 1, 4, 6, 3};
    cout << "Vector before make_heap : ";
    for (auto &i : A) cout << i << " ";
    cout << "\n";

    make_heap(A.begin(), A.end());
    cout << "Vector after make_heap : ";
    int n = 1;
    for (auto &i : A) cout << i << (((++n & (n - 1)) == 0) ? " | " : " ");
    cout << "\n";

    sort_heap(A.begin(), A.end());
    cout << "Vector after sort_heap : ";
    for (auto &i : A) cout << i << " ";
    cout << "\n";

    return 0;
}