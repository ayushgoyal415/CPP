#include <iostream>
#include <vector>
using namespace std;

// In this case data structure is not needed as we don't have to print anything

int count(int idx, vector<int> &A, int sum, int k) {
    if (idx == A.size()) {
        if (sum == k) return 1;
        return 0;
    }

    // Pick A[idx] and add it to sum
    sum += A[idx];
    int pick = count(idx + 1, A, sum, k);

    // Not pick A[idx] so remove it from sum
    sum -= A[idx];
    int not_pick = count(idx + 1, A, sum, k);

    return pick + not_pick;
}

int main() {
    vector<int> A{1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int idx = 0, sum = 0;
    const int k = 2;

    cout << count(idx, A, sum, k);

    return 0;
}