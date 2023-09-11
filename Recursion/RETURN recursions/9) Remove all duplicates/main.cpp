#include <iostream>
using namespace std;

string rmv_all_dup(string s) {
    if (s.size() == 0) return "";
    if (s.find(s[0], 1) != string::npos) return rmv_all_dup(s.substr(1));
    return s[0] + rmv_all_dup(s.substr(1));
}

int main() {
    cout << rmv_all_dup("pippxxpiixipi");
    return 0;
}
