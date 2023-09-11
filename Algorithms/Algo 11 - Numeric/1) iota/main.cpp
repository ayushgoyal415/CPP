#include <iostream>
#include <numeric>  // Header file is numeric not algorithm
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A(20);

    iota(A.begin(), A.end(), 1);

    for (int &i : A) cout << i << " ";
    cout << "\n";

    return 0;
}