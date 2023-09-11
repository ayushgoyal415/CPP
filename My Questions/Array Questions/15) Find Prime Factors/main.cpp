#include <math.h>

#include <iostream>
#include <vector>
using namespace std;

vector<int> prime_factor(int n) {
    vector<int> spf(n + 1), ans;

    for (int i = 2; i <= n; i++) spf[i] = i;

    for (int i = 2; i <= (int)pow(n, 0.5); i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= n; j += i) {
                if (spf[j] == j) spf[j] = i;
            }
        }
    }

    while (n != 1) {
        ans.push_back(spf[n]);
        n /= spf[n];
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> ans = prime_factor(n);

    for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";

    return 0;
}