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

// Making comparator for sorting in ascending order
bool asc(int a, int b) { return a > b; }

// Making comparator for sorting in descending order
bool desc(int a, int b) { return a < b; }

// Making a sorting algorithm that accepts a pointer to comparator function
void sort_selection(vector<int> &A, auto fp) {
    int n = A.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (fp(A[i], A[j])) /* Using comparator by decoding fp */ {
                swap(A[i], A[j]);
            }
        }
    }
}

void print(vector<int> A) {
    for (int i = 0; i < A.size(); i++) cout << A[i] << " ";
    cout << "\n";
}

int main() {
    vector<int> A = get_vec();

    // Passing in comparator function as pointer using auto
    sort_selection(A, asc);
    print(A);

    sort_selection(A, desc);
    print(A);

    return 0;
}