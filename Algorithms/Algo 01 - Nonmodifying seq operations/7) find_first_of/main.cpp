#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // find_first_of looks for the first value in one data structure that
    // matches with any value in the second data structure.
    // Returns iterator to the first match in ds 1
    // If no match found then it returns an iterator pointing to end of ds1

    vector<int> A = {1, 2, 3, 4, 5};
    vector<int> B = {4, 6, 7, 8, 3};
    vector<int> C = {6, 7, 8, 9, 0};

    auto it1 = find_first_of(A.begin(), A.end(), B.begin(), B.end());
    auto it2 = find_first_of(A.begin(), A.end(), C.begin(), C.end());

    auto print = [](auto &A, auto &it) {
        (it == A.end()) ? cout << "No matching element found\n"
                        : cout << "First matching element : " << *it
                               << ", Idx : " << distance(A.begin(), it) << "\n";
    };

    print(A, it1);
    print(A, it2);

    return 0;
}