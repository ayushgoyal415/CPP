#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print(auto s, auto st, auto en) {
    cout << s;
    for (st; st != en; st++) cout << *st << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A = {5, 4, 3, 9, 9};

    // Returns an iterator pointing to the first unsorted element

    auto it =
        is_sorted_until(A.begin(), A.end(), [](int x, int y) { return x > y; });

    print("Vector A : ", A.begin(), A.end());
    cout << "Index of first unsorted element: " << distance(A.begin(), it)
         << ", Element : " << *it << "\n";

    print("Sorted Range : ", A.begin(), it);
    print("Unsorted Range : ", it, A.end());

    return 0;
}