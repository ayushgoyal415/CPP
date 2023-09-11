#include <iostream>
using namespace std;

string rmv_adj_dup(string s) {
    int n = s.size();
    if (n == 0) return "";
    if (s[0] == s[1]) return rmv_adj_dup(s.substr(1));
    return s[0] + rmv_adj_dup(s.substr(1));
}

int main() {
    cout << rmv_adj_dup("Heeeelloooo looool");
    return 0;
}