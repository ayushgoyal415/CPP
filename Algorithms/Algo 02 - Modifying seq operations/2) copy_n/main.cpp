#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Copies the derired number of elements from one ds to another
    // Coptying rules of replacement and beack_inserter are same as copy and
    // copy_if
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> B;

    copy_n(A.begin(), 3, back_inserter(B));
    for (auto& i : B) cout << i << " ";
    cout << "\n";

    copy_n(A.begin() + 3, 7, back_inserter(B));
    for (auto& i : B) cout << i << " ";
    cout << "\n";

    return 0;
}