#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Setting up a vector with integers from 1 to 5
    vector<int> A(5);
    iota(A.begin(), A.end(), 1);

    // Adding all the vector values into 0 and returning to sum
    int sum = accumulate(A.begin(), A.end(), 0);
    cout << sum << "\n";

    // Multiplying (take 1 as initial value)
    auto multiplier = [](int x, int y) { return x * y; };
    int mult = accumulate(A.begin(), A.end(), 1, multiplier);
    cout << mult << "\n";

    // Making a string of numbers connected by '-'
    auto dash_maker = [](string &x, int &y) { return x + '-' + to_string(y); };
    string s = accumulate(A.begin() + 1, A.end(), to_string(A[0]), dash_maker);
    cout << s << "\n";

    return 0;
}