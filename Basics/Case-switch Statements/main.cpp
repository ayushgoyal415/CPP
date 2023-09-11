#include <iostream>
using namespace std;

int main() {
    // Only constants can act as case statements
    // Switch can only examine integer values
    const int pass = 1997;

    cout << "Enter your password here > ";
    int input;
    cin >> input;

    switch (input) {
        case pass:
            cout << "Correct password. Access granted.\n";
            break;

        default:
            cout << "Incorrect password. Access denied.\n";
    }

    return 0;
}
