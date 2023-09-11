#include <iostream>
#include <vector>
using namespace std;

vector<int> user_vector() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    return A;
}

void sort_insertion(vector<int> &A) {
    int n = A.size();
    for (int i = 1; i < n; i++) {
        int c = A[i];
        int j = i - 1;
        while (A[j] > c && j >= 0) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = c;
    }
}

int main() {
    vector<int> A(user_vector());

    sort_insertion(A);

    for (int i = 0; i < A.size(); i++) cout << A[i] << " ";
    cout << "\n";

    return 0;
}