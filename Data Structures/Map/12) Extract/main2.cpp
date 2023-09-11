#include <iostream>
#include <map>
using namespace std;

void print(string s, map<int, char> const &A) {
    cout << s;
    for (auto it = A.begin(); it != A.end(); it++) {
        cout << "[" << it->first << ", " << it->second
             << ((it == --A.end()) ? "]" : "], ");
    }
    cout << '\n';
}

int main() {
    map<int, char> A{{1, 'a'}, {2, 'b'}, {3, 'c'}, {4, 'd'}, {5, 'e'}};
    print("Original A : ", A);

    // Why does extract and node handler exist
    // To understand this first we need to try to change value and key in a map

    // Changing value of key 3 to 'z'
    A.find(3)->second = 'z';  // find() returns an iterator
    print("A after changing value of key 3 to z : ", A);

    // This works well for changing value but not for updating a key
    // Compiler throws an error. This is because if we were able to update a key
    // in this way then the map does not know implicitly that key has been
    // modified and thus container breaks as it is map's responsibility to keep
    // the keys in order

    // Updating key 3 to 26
    // Here comes the role of extract function. It is very efficient

    auto nh = A.extract(3);

    // .empty() helps to detect if the nh was able to find() the value or not
    // It is very important to check if the nh is empty or not
    // If you don't do it and call .key() on an empty nh, it will crash the
    // program.
    if (!nh.empty()) {
        nh.key() = 26;
        // Also we cannot insert nh simply without calling move
        // This is a really efficient way of reinserting nh
        A.insert(move(nh));
    }
    print("A after updating key 3 to 26 : ", A);

    return 0;
}