#include <iostream>
using namespace std;

bool check_pow_2(int n) {
    if (n <= 0) return 0;
    return (!(n & n - 1));
}

int main() {
    int n;
    cin >> n;
    cout << check_pow_2(n);
    return 0;
}