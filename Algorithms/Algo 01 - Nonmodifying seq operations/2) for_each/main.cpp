#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Making an operator overloaded function that gives () a speacial function of
// adding whatever gets placed in this parathesis
struct Addition {
    int add = 0;
    void operator()(int x) { add += x; };
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A = {10, 20, 30, 40, 50};

    auto add_one = [](int &x) { x++; };
    auto print = [](int &x) { cout << x << " "; };
    for_each(A.begin(), A.end(), add_one);
    for_each(A.begin(), A.end(), print);
    cout << "\n";

    // Calling Addition class opertor () for_each of the element and store the
    // value in object a
    Addition a = for_each(A.begin(), A.end(), Addition());
    cout << a.add << "\n";

    return 0;
}