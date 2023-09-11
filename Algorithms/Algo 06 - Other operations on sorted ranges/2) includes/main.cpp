#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Returns true if the one sorted range is a subsequence of another
    // sorted range. (A subsequence need not be contiguous.)

    auto il = {1, 2, 3, 4, 5, 6, 7, 8};
    auto il1 = {2, 3, 4}, il2 = {4, 3, 2}, il3 = {1, 2, 8}, il4 = {7, 8, 1},
         il5 = {1, 1, 2};

    auto check = [&](auto &iln) {
        for (auto &i : iln) cout << i << " ";
        // boolaplpha call out bools as true or false rather than 0 and 1
        cout << boolalpha << " : "
             << includes(il.begin(), il.end(), iln.begin(), iln.end()) << "\n";
    };

    cout << "Does the example Init list { ";
    for (auto &i : il) cout << i << " ";
    cout << "} include the subsequence : \n";

    check(il1);
    check(il2);
    check(il3);
    check(il4);
    check(il5);

    return 0;
}