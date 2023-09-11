#include <iostream>
#include <vector>
using namespace std;

vector<int> indexes_of_max_sum_subarray(vector<int> &A) {
    vector<int> ans(2);
    int curr_sum = 0, max_sum = A[0], l = 0, r = 0;

    for (int i = 0; i < A.size(); i++) {
        curr_sum += A[i];

        if (curr_sum > max_sum) {
            max_sum = curr_sum;
            r = i;
            ans[0] = l;
            ans[1] = r;
        }
        // Put (curr_sum < 0) if you want lexographically smaller left value
        if (curr_sum <= 0) {
            curr_sum = 0;
            l = i + 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n), ans;
    for (int i = 0; i < n; i++) cin >> A[i];

    ans = (indexes_of_max_sum_subarray(A));

    cout << ans[0] << " " << ans[1];

    return 0;
}