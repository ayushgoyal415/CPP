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
void print(vector<int> &A) {
    for (int i = 0; i < A.size(); i++) cout << A[i] << " ";
    cout << "\n";
}
// Time complexity of Selection Sorting is O(N2)
void selection_sort(vector<int> &A) {
    int n = A.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] > A[j]) swap(A[i], A[j]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A = get_vec();

    selection_sort(A);
    print(A);

    return 0;
}