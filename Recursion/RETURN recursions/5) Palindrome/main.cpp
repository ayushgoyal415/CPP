#include <iostream>
using namespace std;

bool palindrome(string s, int i) {
    int n = s.size();
    if (i >= n / 2) return 1;
    if (s[i] != s[n - 1 - i]) return 0;
    return palindrome(s, i + 1);
}

int main() {
    cout << palindrome("madam", 0);
    return 0;
}