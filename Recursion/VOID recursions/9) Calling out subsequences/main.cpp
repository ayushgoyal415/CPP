#include <iostream>
using namespace std;

void substring(string s, string ans) {
    if (s.size() == 0) {
        cout << ans << "\n";
        return;
    }
    substring(s.substr(1), ans);
    substring(s.substr(1), ans + s[0]);
}

int main() {
    substring("ABC", "");
    return 0;
}