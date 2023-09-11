#include <limits.h>

#include <iostream>
#include <vector>
using namespace std;

void max_sum_at_flanks(vector<int> &A) {
    int n = A.size();
    int elements_from_rt = 0;
    int elements_from_lt = 0;
    int max_sum;

    vector<int> r_sum_arr(A);
    vector<int> l_sum_arr(A);

    int r_mx = A[n - 1];
    int l_mx = A[0];
    int r_mx_idx = n - 1;
    int l_mx_idx = 0;

    for (int i = n - 2; i >= 0; i--) {
        r_sum_arr[i] += r_sum_arr[i + 1];
        if (r_sum_arr[i] > r_mx) {
            r_mx = r_sum_arr[i];
            r_mx_idx = i;
        }
    }

    for (int i = 1; i < n; i++) {
        l_sum_arr[i] += l_sum_arr[i - 1];
        if (l_sum_arr[i] > l_mx) {
            l_mx = l_sum_arr[i];
            l_mx_idx = i;
        }
    }

    int curr_sum;
    int max_so_far = INT_MIN;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            curr_sum = l_sum_arr[i] + r_sum_arr[j];

            if (curr_sum > max_so_far) {
                max_so_far = curr_sum;
                max_sum = max_so_far;
                elements_from_lt = i + 1;
                elements_from_rt = n - j;
            }
        }
    }

    if (r_mx >= max_so_far && r_mx > l_mx) {
        max_sum = r_mx;
        elements_from_lt = 0;
        elements_from_rt = n - r_mx_idx;
    }

    if (l_mx >= max_so_far && l_mx >= r_mx) {
        max_sum = l_mx;
        elements_from_lt = l_mx_idx + 1;
        elements_from_rt = 0;
    }

    cout << "Max from flanks : " << max_sum << "\n";
    cout << "Elements from right : " << elements_from_rt << "\n";
    cout << "Elements from left  : " << elements_from_lt << "\n";
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    max_sum_at_flanks(A);

    return 0;
}