#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s = {"sort only this -> ecdab"};

    // Arguments
    // 1,2) The iterators to the range of elements to be sorted
    // 3) Random acess iterator -> can give any iterator pointing to the ds
    // being sorted

    partial_sort(s.end() - 5, s.end(), s.begin());
    cout << s << "\n";

    partial_sort(s.end() - 5, s.end(), s.begin(),
                 [](char &x, char &y) { return x > y; });
    cout << s << "\n";

    // Partial sort copy -> difficult to understand

    return 0;
}