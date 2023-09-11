#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Copies the elements from one sorted range which are not
    // found in the other sorted range to another ds
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10};
    vector<int> B = {1, 2, 3, 4, 5};
    vector<int> C;

    // Copies from A to C whatever is not there in B
    set_difference(A.begin(), A.end(), B.begin(), B.end(), back_inserter(C));

    auto print = [](auto s, auto &A) {
        cout << s;
        for (auto &i : A) cout << i << " ";
        cout << "\n";
    };

    print("Vector A : ", A);
    print("Vector B : ", B);
    print("Vector C : ", C);

    return 0;
}