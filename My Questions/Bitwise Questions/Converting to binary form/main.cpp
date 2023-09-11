#include <math.h>

#include <iostream>
#include <vector>
using namespace std;

vector<int> find_binary(int n) {
    // Finding the [index] of most significant bit
    int l;
    if (n > 0) l = log2(n);
    if (n <= 0) l = 31;

    // Vector size required it equal to index of most significant bit + 1
    //(to compensate for index 0)
    vector<int> ans(l + 1);

    for (int i = l; i >= 0; i--) {
        if (((1 << i) & n) == 0)
            ans[i] = 0;
        else
            ans[i] = 1;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> ans = find_binary(n);

    for (int i = ans.size() - 1; i >= 0; i--) cout << ans[i];

    return 0;
}
