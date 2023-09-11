#include <bits/stdc++.h>
using namespace std;

// You have n rupees at beginning
// You can buy 1 chocolate for 1 rupee
// You can then buy 1 chocolate for every m wrappers
// Calculate the total number of chocolates that you can buy

int main() {
    int n;
    cin >> n;

    int m;
    cin >> m;

    int ans = n;
    int wrap = n;

    while (wrap >= m) {
        ans += wrap / m;
        wrap = wrap / m + wrap % m;
    }

    cout << ans << "\n";

    return 0;
}