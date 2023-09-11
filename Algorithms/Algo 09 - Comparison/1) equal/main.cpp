#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    auto isPallindrome = [](string A) {
        (equal(A.begin(), A.begin() + A.size() / 2, A.rbegin()))
            ? cout << A << " : Pallindrome\n"
            : cout << A << " : Not Pallindrome\n";
    };

    isPallindrome("hello");
    isPallindrome("radar");

    return 0;
}