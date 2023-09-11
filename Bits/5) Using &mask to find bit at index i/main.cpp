#include <iostream>
using namespace std;

int find_bit(int n, int i) {
    int mask = (1 << i);
    if ((n & mask) != 0) return 1;
    return 0;
}

int main() {
    int n, i;
    cin >> n >> i;

    cout << find_bit(n, i);

    return 0;
}
