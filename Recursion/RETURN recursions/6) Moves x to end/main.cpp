#include <iostream>
using namespace std;

string move_x(string s) {
    if (s.size() == 0) return "";
    if (s[0] == 'x') return move_x(s.substr(1)) + s[0];
    return s[0] + move_x(s.substr(1));
}

int main() {
    cout << move_x("xray xerox exotic exit");
    return 0;
}