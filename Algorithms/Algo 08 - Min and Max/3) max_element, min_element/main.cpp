#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Returns iterator to the maximum element
    vector<string> A = {"hello", "basket", "hey", "elephant", "go"};

    auto cmp = [](string x, string y) { return x.size() < y.size(); };
    auto it1 = max_element(A.begin(), A.end());
    auto it2 = max_element(A.begin(), A.end(), cmp);
    auto it3 = min_element(A.begin(), A.end());
    auto it4 = min_element(A.begin(), A.end(), cmp);

    cout << "Max string using default max_element function : " << *it1 << "\n";
    cout << "Max string using size comparator : " << *it2 << "\n";
    cout << "Min string using default min_element function : " << *it3 << "\n";
    cout << "Min string using size comparator : " << *it4 << "\n";
    return 0;
}