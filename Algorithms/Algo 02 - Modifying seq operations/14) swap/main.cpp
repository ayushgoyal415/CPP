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

    vector<int> A = {1, 2, 3, 4, 5}, B = {10, 20, 30, 40, 50};

    print("Before swap vectors : \nVector A : ", A);
    print("Vector B : ", B);

    swap(A, B);

    print("\nAfter swap vectors : \nVector A : ", A);
    print("Vector B : ", B);

    return 0;
}