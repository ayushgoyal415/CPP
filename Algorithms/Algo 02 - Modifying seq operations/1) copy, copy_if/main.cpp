#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Copies a range from one ds to another ds at desired location
    // Note : if the target ds contains elements at those positions, it replaces
    // those elements
    // Note : if the target ds does not contain necessary space then you can't
    // use ds.begin() instead you can copy using the command back_inserter

    vector<int> A = {3, 4};
    vector<int> B = {1, 2, 0, 0, 5};

    // Copying whole A to B at location begin + 2
    // i.e. replacing 0s with 3 and 4
    copy(A.begin(), A.end(), B.begin() + 2);
    for (auto &i : B) cout << i << " ";
    cout << "\n";

    // copy_if (accepts a boolian function)
    auto multiples_of_two = [](int &x) { return x % 2 == 0; };
    vector<int> C;
    // Using back_inserter command to fill an empty vector
    copy_if(B.begin(), B.end(), back_inserter(C), multiples_of_two);
    for (auto &i : C) cout << i << " ";
    cout << "\n";

    return 0;
}