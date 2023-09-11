#include <iostream>
#include <set>
using namespace std;

void print(set<int>& A) {
    for (auto& i : A) cout << i << " ";
    cout << "\n";
}

int main() {
    // Uninitialized constuctor
    set<int> A;
    A.insert(1), A.insert(3), A.insert(2);
    print(A);

    // Initializer list constructer
    set<int> B{1, 5, 8, 10, 0, 4, 3};
    print(B);

    // Copy Constructer
    set<int> C(A);
    print(C);

    // Iterater Constructor (e.g. by using an iterater returned by .find())
    set<int> D(A.find(2), A.end());
    print(D);

    // Move Constructer (cuts the set and paste into new set)
    set<int> E(move(A));
    print(E);
    cout << A.size() << "\n";

    return 0;
}