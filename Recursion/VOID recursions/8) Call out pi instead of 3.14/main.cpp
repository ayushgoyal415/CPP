#include <iostream>
using namespace std;

void replace_pi(string s) {
    if (s.size() == 0) return;
    if (s[0] == 'p' && s[1] == 'i') {
        cout << "3.14";
        replace_pi(s.substr(2));
    } else {
        cout << s[0];
        replace_pi(s.substr(1));
    }
}

int main() {
    replace_pi("pippxxpiixipi");
    return 0;
}