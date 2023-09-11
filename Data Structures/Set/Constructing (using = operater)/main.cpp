#include <iostream>
#include <set>
using namespace std;

void print(set<int>& A) {
    cout << A.size() << " : ";
    for (auto& i : A) cout << i << " ";
    cout << "\n";
}

int main() {
    set<int> A{1, 2, 3}, B, C;

    print(A), print(B), print(C);

    B = A;
    print(B), print(A);

    C = move(A);
    print(C), print(A);

    auto D = {1, 2, 3, 5};
    C = D;
    print(C);

    return 0;
}