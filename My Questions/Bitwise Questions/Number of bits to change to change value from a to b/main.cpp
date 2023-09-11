#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int n = a ^ b;  // XOR will light up only if the values are different

    int ans = 0;

    while (n != 0) {
        n &= n - 1;
        ans++;
    }

    cout << ans;

    return 0;
}
