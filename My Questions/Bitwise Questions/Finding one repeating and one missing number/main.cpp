#include <iostream>
#include <vector>
using namespace std;

int main() {
    //--------------------------------------------------------------------------
    // Find one missing number and one repeating element in a vector containing
    // elements from 1 to n (where n is the size of vector)
    //--------------------------------------------------------------------------
    vector<int> A{1, 2, 3, 3, 4, 5, 6, 7, 8, 10};

    int x = 0, idx = 0, ans1 = 0, ans2 = 0;

    for (unsigned int i = 0; i < A.size(); i++) x ^= A[i];
    for (unsigned int i = 1; i <= A.size(); i++) x ^= i;

    for (int i = 0; i < 100; i++) {
        if ((x & (1 << i)) != 0) {
            idx = i;
            break;
        }
    }

    for (unsigned int i = 1; i <= A.size(); i++)
        if ((i & (1 << idx)) != 0) ans1 ^= i;

    for (unsigned int i = 0; i < A.size(); i++)
        if ((A[i] & (1 << idx)) != 0) ans1 ^= A[i];

    ans2 = x ^ ans1;

    cout << ans1 << " " << ans2 << "\n";

    return 0;
}
