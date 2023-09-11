#include <iostream>
using namespace std;

string upper_case_it(string s) {
    string s_up;
    for (int i = 0; i < s.length(); i++) s_up += toupper(s[i]);
    return s_up;
}

bool same_string(string s1, string s2) {
    return (!upper_case_it(s1).compare(upper_case_it(s2)));
}

int main() {
    string pass = "Hello", input;

    do {
        cout << "Enter Password : ";
        cin >> input;
        if (same_string(pass, input) == false)
            cout << "Incorrect Password. Please try again.\n";
    } while (same_string(pass, input) == false);

    cout << "Password Accepted\n";

    return 0;
}