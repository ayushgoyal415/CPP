#include <iostream>
#include <vector>
using namespace std;

vector<string> A{"",    "./",  "abc",  "def", "ghi",
                 "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string s, string ans) {
    if (s.size() == 0) {
        cout << ans << "\n";
        return;
    }
    string curr_key = A[int(s[0] - '0')];
    for (int i = 0; i < curr_key.size(); i++) {
        keypad(s.substr(1), ans + curr_key[i]);
    }
}

int main() {
    string ans;
    string keys = "27";  // String '23' tells to make all possible outcomes
                         // between keypad buttons 2 and 3
    keypad(keys, ans);
    return 0;
}