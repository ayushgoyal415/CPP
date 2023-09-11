#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print(auto s, auto &A) {
    cout << s;
    int n = 1;
    for (auto &i : A) cout << i << (((++n & (n - 1)) == 0) ? " | " : " ");
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Removes the first element from the heap by moving it to the last so that
    // it can then be removed using pop_back without distrurbing the whole heap

    vector<int> A = {1, 2, 3, 4, 5, 6, 7};
    print("Vector before make_heap : ", A);

    make_heap(A.begin(), A.end());
    print("Vector after make_heap : ", A);

    pop_heap(A.begin() + 1, A.end());
    print("\nVector after pop_heap at A.begin() + 1 : ", A);
    cout << "Note that this brings the first parent at level 1 to end\n\n";

    A.pop_back();
    print("Vector after pop_back : ", A);

    return 0;
}