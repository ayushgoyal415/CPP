#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Returns true if range 1 is lexicographically less than range 2

    vector<char> A = {'a', 'b', 'c', 'd'};
    vector<char> B = {'d', 'c', 'b', 'a'};

    cout << boolalpha
         << lexicographical_compare(A.begin(), A.end(), B.begin(), B.end())
         << "\n";

    return 0;
}