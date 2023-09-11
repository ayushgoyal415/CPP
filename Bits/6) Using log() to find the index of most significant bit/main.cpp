#include <math.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // For all negative integers, the length of significant bits is equal to 31
    if (n < 0) cout << 31;
    if (n >= 0) cout << (int)log2(n);

    return 0;
}
