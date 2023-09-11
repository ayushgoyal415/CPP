#include <iostream>
using namespace std;

void pattern(int n) {
    if (n == 0) return;

    for (int i = 1; i <= n; i++) cout << i << " ";
    cout << "\n";

    pattern(n - 1);
}

int main() {
    pattern(5);
    return 0;
}