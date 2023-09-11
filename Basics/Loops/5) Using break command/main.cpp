#include <iostream>
using namespace std;

int main() {
    string password = "hello";
    string user_input;

    do {
        cout << "Enter your password here > ";
        cin >> user_input;
        if (user_input != password)
            cout << "Wrong password. Access denied.\n\n";
        else
            break;
    } while (true);
    cout << "Correct Password. Access granted.\n\n";

    return 0;
}