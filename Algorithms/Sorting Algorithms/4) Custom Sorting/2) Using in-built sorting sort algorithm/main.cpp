#include <algorithm>
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

// Note that the STL in-built algorithm accepts comparater values in inverse
// It performs swap if comparator function returns false
// So the simple way to directly return what you want
// For e.g. the following comparator will sort in descending order
bool cmp(int a, int b) { return a > b; }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A = get_vec();

    // Sorting using a regular function
    // sort(A.begin(), A.end(), cmp);
    // print(A);

    // Sorting using a lambda function
    // sort(A.begin(), A.end(), [](int a, int b) { return a > b; });
    // print(A);

    return 0;
}