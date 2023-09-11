#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // (a + b) % mod = ((a % mod) + (b % mod)) % mod
    // (a * b) % mod = ((a % mod) * (b % mod)) % mod
    // (a - b) % mod = ((a % mod) - (b % mod) + mod) % mod
    // (a / b) % mod = ((a % mod) * (b-inverse % mod)) % mod

    return 0;
}