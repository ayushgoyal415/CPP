#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A = {0, 0, 0, 1, 2, 3, 4, 5};
    vector<int> B, C;

    replace_copy(A.begin(), A.end(), back_inserter(B), 0, 9);
    replace_copy_if(
        A.begin(), A.end(), back_inserter(C), [](int x) { return x % 2 == 0; },
        9);

    cout << "Vector A : ";
    for (auto &i : A) cout << i << " ";
    cout << "\n";
    cout << "Vector B : ";
    for (auto &i : B) cout << i << " ";
    cout << "\n";
    cout << "Vector C : ";
    for (auto &i : C) cout << i << " ";
    cout << "\n";

    return 0;
}