#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Finds first range in the first ds that matches with the second ds
    // Returns iterator to the index of first element
    // If range not found then return iterator to end

    vector<int> A = {1, 2, 3, 4, 5, 9, 9, 3, 4, 5};
    vector<int> B = {3, 4, 5};

    auto it = search(A.begin(), A.end(), B.begin(), B.end());

    (it == A.end())
        ? cout << "No such sequence found\n"
        : cout << "Sequence found at idx : " << distance(A.begin(), it) << "\n";

    return 0;
}