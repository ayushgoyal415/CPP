#include <bits/stdc++.h>
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

    // 1) Sorting in ascending order based on first and then second value
    // sort(A.begin(), A.end());
    // print(A);

    // 2) Sorting in descending order based on first and then second value
    // sort(A.begin(), A.end(), [](auto a, auto b) { return a > b; });
    // print(A);

    // 3) Sorting in ascending order based on second and then first value
    // auto cmp = [](pair<int, int> a, pair<int, int> b){
    //     if(a.second == b.second) return a.first < b.first;
    //     return a.second < b.second;
    // };
    // sort(A.begin(), A.end(), cmp);
    // print(A);

    // 4) Sorting in ascending order for first & descending for second

    // auto cmp = [](auto a, auto b) {
    //     if (a.first == b.first) return a.second > b.second;
    //     return a.first < b.first;
    // };
    // sort(A.begin(), A.end(), cmp);
    // print(A);

    // 5) Sorting in ascending order based on sum of pair

    // auto cmp = [](auto a, auto b) {
    //     if ((a.first + a.second) == (b.first + b.second)) return a.first <
    //     b.first;
    //         return (a.first + a.second) < (b.first + b.second);
    // };
    // sort(A.begin(), A.end(), cmp);
    // print(A);

    return 0;
}