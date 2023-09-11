#include <iostream>
using namespace std;

string replace_pi(string s) {
    if (s.size() == 0) return "";
    if (s[0] == 'p' && s[1] == 'i') return "3.14" + replace_pi(s.substr(2));
    return s[0] + replace_pi(s.substr(1));
}

int main() {
    cout << replace_pi("pippxxpiixipi");
    return 0;
}