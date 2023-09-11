#include <iostream>
#include <vector>
using namespace std;

int max_subarray_sum(vector<int> &A) {
    int curr_sum = 0, max_so_far = A[0];
    for (int i = 0; i < A.size(); i++) {
        curr_sum += A[i];
        if (curr_sum > max_so_far) max_so_far = curr_sum;
        if (curr_sum < 0) curr_sum = 0;
    }
    return max_so_far;
}

int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    cout << max_subarray_sum(A);

    return 0;
}