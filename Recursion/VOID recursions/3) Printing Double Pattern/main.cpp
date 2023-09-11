#include <iostream>
using namespace std;

void double_pattern(int n) {
    if (n == 1) {
        cout << 1 << "\n";
        return;
    }

    for (int i = 1; i <= n; i++) cout << i << " ";
    cout << "\n";

    double_pattern(n - 1);

    for (int i = 1; i <= n; i++) cout << i << " ";
    cout << "\n";
}

int main() {
    double_pattern(5);
    return 0;
}