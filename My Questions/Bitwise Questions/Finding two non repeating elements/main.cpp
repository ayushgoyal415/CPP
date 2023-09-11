#include <iostream>
#include <vector>
using namespace std;

int main() {
    //-----------------------------------------------------------------------
    // Find two non repeating elements in a vector containing all repeating
    // elements
    //-----------------------------------------------------------------------
    vector<int> A{5, 4, 1, 3, 5, 1};
    int x = 0, idx = 0, ans1 = 0, ans2 = 0;

    for (unsigned int i = 0; i < A.size(); i++) x ^= A[i];

    for (int i = 0; i < 100; i++) {
        if ((x & (1 << i)) != 0) {
            idx = i;
            break;
        }
    }

    for (unsigned int i = 0; i < A.size(); i++)
        if ((A[i] & (1 << idx)) != 0) ans1 ^= A[i];

    ans2 = x ^ ans1;
    cout << ans1 << " " << ans2 << "\n";

    return 0;
}
