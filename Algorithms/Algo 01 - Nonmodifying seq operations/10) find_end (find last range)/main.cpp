#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A = {1, 2, 3, 9, 9, 4, 5, 6, 9, 9, 7, 8};
    vector<int> range = {9, 9};

    // Finds the last match for the target range and returns an iterator to it
    // If it fails to find such a sequence then it returns iter pointing to end

    auto it = find_end(A.begin(), A.end(), range.begin(), range.end());
    (it != A.end())
        ? cout << "Last Seq found at idx : " << distance(A.begin(), it) << "\n"
        : cout << "Seq not found\n";

    return 0;
}