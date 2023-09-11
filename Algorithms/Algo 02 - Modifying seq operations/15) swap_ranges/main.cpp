#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    auto print = [](auto s, auto &A) {
        cout << s;
        for (auto &i : A) cout << i << " ";
        cout << "\n";
    };

    vector<int> A = {3, 4, 5, 4, 5}, B = {1, 2, 1, 2, 3};

    print("Before swap vectors : \nVector A : ", A);
    print("Vector B : ", B);

    swap_ranges(A.begin(), A.begin() + 3, B.begin() + 2);

    print("\nAfter swap vectors : \nVector A : ", A);
    print("Vector B : ", B);

    return 0;
}