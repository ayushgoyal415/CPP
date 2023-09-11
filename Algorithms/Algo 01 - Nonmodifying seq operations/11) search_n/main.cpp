#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Finds a sequence with number of consecutive repeats equal to desired
    // repeats and returns iterator pointing to first element of the sequence
    string A = "hello";

    auto print = [&A](string::iterator &it) {
        (it == A.end())
            ? cout << "No such sequence found"
            : cout << "Sequence found at index : " << distance(A.begin(), it);
        cout << "\n";
    };

    // Here we are asking it to find two consecutive 'l'
    string::iterator it = search_n(A.begin(), A.end(), 2, 'l');
    print(it);

    it = search_n(A.begin(), A.end(), 3, 'l');
    print(it);

    return 0;
}