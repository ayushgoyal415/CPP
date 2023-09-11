#include <iostream>
using namespace std;

int main() {
    int n, i, mask;
    cin >> n >> i;

    mask = (1 << i);
    n = (n | mask);
    cout << n;

    return 0;
}
