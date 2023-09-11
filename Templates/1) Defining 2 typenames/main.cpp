#include <iostream>
using namespace std;

// Equals function that accepts two different type objects
template <typename T, typename U>
bool equals(T lhs, U rhs) {
    return lhs == rhs;
}

int main() {
    cout << boolalpha << equals(1, 1.2) << endl;
    cout << boolalpha << equals(1, 'c') << endl;

    return 0;
}