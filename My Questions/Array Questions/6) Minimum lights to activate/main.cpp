#include <iostream>
#include <vector>
using namespace std;

int min_lights(vector<int> A, int B) {
    int n = A.size(), element = 0, approach = B - 1, ans = 0;

    while (element < n) {
        if (A[approach] == 1) {
            ans++;
            element = approach + B;
            approach = min(n - 1, element + B - 1);
        } else {
            approach--;
            if (approach < element - B + 1) return -1;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    int B;
    cin >> B;

    cout << min_lights(A, B);

    return 0;
}