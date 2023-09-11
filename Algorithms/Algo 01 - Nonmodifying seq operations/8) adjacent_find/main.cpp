#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A = {1, 2, 3, 3, 4, 5, 6, 18, 7, 8, 9, 10};

    // Finds adjacent repeating numbers and returns iterator to it
    // If not found then return an iterator to the end
    auto it1 = adjacent_find(A.begin(), A.end());

    // It can also find adajacent numbers satisfying a particular bool condition
    auto multiple_of_three = [](int x, int y) { return y == x * 3; };
    auto it2 = adjacent_find(A.begin(), A.end(), multiple_of_three);

    auto print = [](auto &A, auto &it) {
        (it == A.end()) ? cout << "No such adjacent elements found\n"
                        : cout << "Adj elements : " << *it << " & " << *(it + 1)
                               << ", At indexes : " << distance(A.begin(), it)
                               << " and next\n";
    };

    print(A, it1);
    print(A, it2);

    return 0;
}