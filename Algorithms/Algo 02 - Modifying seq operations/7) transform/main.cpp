#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Arguments
    // 1, 2) starting and ending iterator of the range from which you want to
    // pass the arguments to your custom function
    // 3) starting iterator of the ds that you want to transform
    // 4) custom function based on which you want to transform

    // Copying elements from one ds to another using transform
    vector<int> A = {0, 2, 3, 4, 0};
    vector<int> B = {1, 0, 0, 0, 5};
    /*Custom function -> */ auto replace = [](int &x) { return x; };
    transform(A.begin() + 1, A.end() - 1, B.begin() + 1, replace);
    for (auto &i : B) cout << i << " ";

    // Capitalising string using transform
    string s = "hello";
    transform(s.begin(), s.end(), s.begin(), [](char &c) { return (c - 32); });
    cout << "\n" << s << "\n";

    return 0;
}