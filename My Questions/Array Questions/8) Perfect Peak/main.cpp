#include <limits.h>

#include <iostream>
#include <vector>
using namespace std;

int find_peak_number(vector<int> &A) {
    int n = A.size();
    vector<int> left_max(n), right_min(n);

    int l_max = A[0], r_min = A[n - 1];

    for (int i = 0; i < n; i++) {
        if (A[i] > l_max) l_max = A[i];
        left_max[i] = l_max;
    }

    for (int i = n - 1; i >= 0; i--) {
        if (A[i] < r_min) r_min = A[i];
        right_min[i] = r_min;
    }

    for (int i = 1; i < n - 1; i++)
        if (A[i] > left_max[i - 1] && A[i] < right_min[i + 1]) return A[i];

    return INT_MIN;
}

int main() {
    vector<int> A, B;
    A = {-3, -4, -3, -10, 1, 10, 11, 20, 3, 5, 6, 2, 9, 4, 8, 6};
    B = {-3, -4, -3, -10, 1, 10, 11, 20, 3, 5, 6, 1, 9, 4, 8, 6};
    // In B, '2' at index 11 is changer to '1'

    cout << "The peak integer is : " << find_peak_number(A) << "\n";
    cout << "The peak integer is : " << find_peak_number(B) << "\n";

    return 0;
}
