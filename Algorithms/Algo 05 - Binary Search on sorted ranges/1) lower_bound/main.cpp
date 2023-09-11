#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Returns an iterator to the first element not less than the given value
    // If no such element is found then it returns an itertor to end/last
    // element of range

    vector<int> A = {1, 2, 3, 40, 50, 60};

    auto print = [&A](string s, vector<int>::iterator it) {
        cout << s;
        (it == A.end()) ? cout << "No lower bound element found\n"
                        : cout << *it << "\n";
    };

    auto it1 = lower_bound(A.begin(), A.end(), 2);
    auto it2 = lower_bound(A.begin(), A.end(), 5);
    auto it3 = lower_bound(A.begin(), A.end(), 70);

    print("Lower bound of 2 : ", it1);
    print("Lower bound of 5 : ", it2);
    print("Lower bound of 70 : ", it3);
    return 0;
}