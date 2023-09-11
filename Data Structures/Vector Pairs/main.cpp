#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> get_vec() {
    int n;
    cin >> n;
    vector<pair<int, int>> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i].first;
        cin >> A[i].second;
    }
    return A;
}

void print(vector<pair<int, int>> &A) {
    for (int i = 0; i < A.size(); i++)
        cout << A[i].first << " " << A[i].second << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<pair<int, int>> A = get_vec();

    print(A);

    return 0;
}