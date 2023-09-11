#include <iostream>
#include <map>
using namespace std;

// Attempts to extract ("splice") each element in source and insert it into
// *this using the comparison object of *this. If there is an element in
// *this with key equivalent to the key of an element from source, then that
// element is not extracted from source. No elements are copied or moved,
// only the internal pointers of the container nodes are repointed. All
// pointers and references to the transferred elements remain valid, but now
// refer into *this, not into source.

void print(string s, map<int, char> const &A) {
    cout << s;
    for (auto const &i : A) cout << i.first << "." << i.second << "  ";
    cout << '\n';
}

int main() {
    map<int, char> A{{1, 'a'}, {2, 'b'}, {3, 'c'},
                     {4, 'd'}, {5, 'e'}, {6, 'f'}};

    map<int, char> B{{5, 'e'}, {6, 'f'}, {7, 'g'},
                     {8, 'h'}, {9, 'i'}, {10, 'j'}};

    map<int, char> C;

    print("Original A : ", A);
    print("Original B : ", B);
    print("Original C : ", C);

    C.merge(A);
    cout << "\nAfter merging A into C : \n";
    print("A : ", A), print("C : ", C);

    C.merge(B);
    cout << "\nAfter merging B into C : \n";
    print("B : ", B), print("C : ", C);

    return 0;
}