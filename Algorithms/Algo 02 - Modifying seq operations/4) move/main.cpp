#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Move function is used when we want to move elements from one ds to
    // another. It is especially used when we can't copy the elements strored
    // e.g. unique_ptr or threads

    vector<int> A = {4, 5, 6, 6};
    vector<int> B = {1, 2, 3};

    move(A.begin(), A.end() - 1, back_inserter(B));

    // After move operation, the elements in the moved-from range will still
    // contain valid values of the appropriate type, but not necessarily the
    // same values as before the move.
    for (int &i : A) cout << i << " ";
    cout << "\n";
    for (int &i : B) cout << i << " ";
    cout << "\n";

    return 0;
}