#include <iostream>
#include <vector>
using namespace std;

int pick_from_both_sides(vector<int> &A, int B) {
    int curr_sum = A[0];
    for (int i = 1; i < B; i++) curr_sum += A[i];

    int start = B - 1, end = A.size() - 1, max = curr_sum;

    while (start >= 0) {
        curr_sum += A[end--] - A[start--];
        if (curr_sum > max) max = curr_sum;
    }
    return max;
}

int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    int B;
    cin >> B;

    cout << pick_from_both_sides(A, B);

    return 0;
}