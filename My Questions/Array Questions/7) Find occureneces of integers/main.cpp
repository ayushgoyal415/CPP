#include <iostream>
#include <vector>
using namespace std;

vector<int> find_occurences(vector<int> &A) {
    int n = A.size(), max = A[0], min = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > max) max = A[i];
        if (A[i] < min) min = A[i];
    }

    vector<int> positive(abs(max) + 1), negative(abs(min) + 1), ans;

    for (int i = 0; i < n; i++) {
        if (A[i] >= 0)
            positive[A[i]] += 1;
        else
            negative[abs(A[i])] += 1;
    }

    for (int i = negative.size() - 1; i >= 0; i--)
        if (negative[i] != 0) ans.push_back(negative[i]);

    for (unsigned int i = 0; i < positive.size(); i++)
        if (positive[i] != 0) ans.push_back(positive[i]);

    return ans;
}

int main() {
    vector<int> test{-4, -10, -10, -7, 1, 1, 4, 1, 8, 10, 2, 5, 20};

    vector<int> ans = find_occurences(test);

    for (unsigned int i = 0; i < ans.size(); i++) cout << ans[i] << " ";

    return 0;
}
