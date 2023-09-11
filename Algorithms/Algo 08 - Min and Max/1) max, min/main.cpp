#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // max can accept an initializer list with multiple values
    auto il = {1, 2, 3, 4, 5};
    cout << "Max element in initalization list : " << max(il) << "\n";

    // Max can accept bool comparator
    string A = "hello", B = "basket";
    cout << "Comparing two strings : " << A << ", " << B << "\n";

    cout << "Max string using default max function : " << max(A, B) << "\n";

    auto cmp = [](string x, string y) { return x.size() < y.size(); };
    cout << "Max string using size comparator : " << max(A, B, cmp) << "\n";

    // Same as max, min can also be used

    return 0;
}