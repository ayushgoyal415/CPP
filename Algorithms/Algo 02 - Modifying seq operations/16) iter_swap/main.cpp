#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A = {2, 3, 1, 5, 8, 4, 9, 6, 10, 7};

    // iter_swap swaps the elements being pointed by the two iterators
    // Creating a sorting algorithm using iterator swap

    auto my_sort = [](auto &A) {
        auto it = A.begin();
        while (it != A.end()) {
            iter_swap(it, min_element(it, A.end()));
            it++;
        }
    };

    my_sort(A);
    for (auto &i : A) cout << i << " ";
    cout << "\n";

    return 0;
}