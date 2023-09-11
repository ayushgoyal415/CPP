#include <iostream>
using namespace std;

int main() {
    int n = 10;

    // Inverse operator inverts all the bits but it does not add
    // 1 (therefore it sets the value to negative but -1)
    cout << n << "\n";
    cout << ~n << "\n";

    // Converting to negative
    cout << ~n + 1 << "\n";

    return 0;
}
