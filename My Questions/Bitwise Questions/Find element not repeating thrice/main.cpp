#include <math.h>

#include <iostream>
#include <vector>
using namespace std;

// Finding a non repeating element in an array with all elements repeating
// thrice

int find_number(vector<int> &A) {
    int n = A.size(), ans = 0, max = A[0];

    for (int i = 1; i < n; i++)
        if (A[i] > max) max = A[i];

    for (int i = 0; i <= (int)log2(max); i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (A[j] & (1 << i)) sum++;
        }
        if (sum % 3 != 0) ans |= (1 << i);
    }
    return ans;
}

int main() {
    vector<int> A{1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7};
    cout << find_number(A);

    return 0;
}