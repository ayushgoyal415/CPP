#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // make_heap() is used to transform a sequence into a binary heap.
    // Such that the key stored in each node of the bianry tree is either
    // greater than or equal to (≥) or less than or equal to (≤) the keys in the
    // node's children.

    // A heap ds points to highest( or lowest) element and making its access in
    // O(1) time.

    // By default make_heap converts a ds into a max type of heap

    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    cout << "Before make_heap : ";
    for (auto &i : A) cout << i << " ";
    cout << "\n";

    make_heap(A.begin(), A.end());

    cout << "After make_heap : ";
    int n = 1;
    for(auto &i : A) cout << i << (((++n & (n - 1)) == 0) ? " | " : " ");
    cout << "\n";

    return 0;
}