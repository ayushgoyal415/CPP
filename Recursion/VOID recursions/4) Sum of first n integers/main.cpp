#include <iostream>
using namespace std;

void sum(int n, int ans) {
    if (n == 0) {
        cout << ans << "\n";
        return;
    }
    sum(n - 1, ans + n);
}

int main() {
    int ans = 0;
    sum(5, ans);
    return 0;
}