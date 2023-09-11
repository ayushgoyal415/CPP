#include <iostream>
#include <vector>
using namespace std;

vector<int> get_vec() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    return A;
}

void reverse_vector(vector<int> &A, int i) {
    int n = A.size();
    if (i >= n / 2) return;
    swap(A[i], A[n - i - 1]);
    reverse_vector(A, i + 1);
}

int main() {
    vector<int> A = get_vec();

    reverse_vector(A, 0);
    for (int i = 0; i < A.size(); i++) cout << A[i] << " ";

    return 0;
}