#include <iostream>
#include <vector>
using namespace std;

// Why functors over functions?
// Funtors can help to create functions with state. In the following example
// count is being maintained by the functor.

struct Tables {
    int m_count = 1;
    int operator()(int table) { return table * m_count++; }
};

int main() {
    vector<int> A;

    Tables t1;

    for (int i = 1; i <= 10; i++)
        (i <= 5) ? A.push_back(t1(2)) : A.push_back(t1(3));

    for (auto &i : A) cout << i << " ";

    return 0;
}