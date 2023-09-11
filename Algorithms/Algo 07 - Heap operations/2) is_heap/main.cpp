#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // By default is_heap checks whether a heap is max heap or not

    vector<int> A = {1, 2, 3, 4, 5, 6, 7};
    vector<int> B = {7, 6, 5, 4, 3, 2, 1};

    auto check = [](auto &A) {
        for (auto &i : A) cout << i << " ";
        cout << " : " << boolalpha << is_heap(A.begin(), A.end()) << "\n";
    };

    check(A);
    check(B);

    return 0;
}