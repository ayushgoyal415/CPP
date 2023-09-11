#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // find, find_if, find_if_not return an iterator pointing to the very first
    // matched target. If they fail to find a match then they return iterator
    // pointing to the end of data structure

    vector<int> A = {10, 20, 30, 40, 50};
    auto check_even = [](int x) { return x % 2 == 0; };

    auto a = find(A.begin(), A.end(), 35);
    auto b = find_if(A.begin(), A.end(), check_even);
    auto c = find_if_not(A.begin(), A.end(), check_even);

    (a != A.end()) ? cout << "35 found\n" : cout << "35 not found\n";
    (b != A.end()) ? cout << "Even found\n" : cout << "Even not found\n";
    (c != A.end()) ? cout << "Odd found\n" : cout << "Odd not found\n";

    return 0;
}