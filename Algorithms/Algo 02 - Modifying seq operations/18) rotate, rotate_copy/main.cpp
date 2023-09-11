#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print(auto s, auto &A) {
    cout << s;
    for (auto &i : A) cout << i << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Rotates a range by desired length
    // In this example the given vector is :
    // 1 2 5 6 3 4 7 8 9 10
    //     ^ ^ ^ ^
    // And we need to the range (5 6 3 4) by 2 to get :
    // 1 2 3 4 5 6 7 8 9 10

    vector<int> A = {1, 2, 5, 6, 3, 4, 7, 8, 9, 10};
    vector<int> B;
    print("Vector A before rotating : ", A);

    // Arguments
    // 1) Iterator to the beginning of the range to rotate (e.g. 5 in this case)
    // 2) Iterator to the element which you want to make as the first element
    // after rotating is done (e.g. 3 in this case)
    // 3) Iterator to the end of the range to rotate (e.g. 4 in this case)

    rotate(A.begin() + 2, A.begin() + 4, A.begin() + 6);
    rotate_copy(A.begin(), A.begin() + 1, A.begin() + 5, back_inserter(B));

    print("Vector A after rotating : ", A);
    print("Vector B after rotate_copying : ", B);

    return 0;
}