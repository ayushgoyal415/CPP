#include <iostream>
using namespace std;

int main() {
    string pass = "hello";
    string input;

    do {
        cout << "Enter your password here > ";
        cin >> input;
        if (input != pass) cout << "Wrong password. Access denied.\n\n";
    } while (input != pass);
    cout << "Correct Password. Access granted.\n\n";

    return 0;
}