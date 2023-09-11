#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // distance -> returns integer equal to the distance between 2 iterators

    vector<int> A = {1, 2, 3, 4, 5};
    int x = distance(find(A.begin(), A.end(), 2), A.begin());
    int y = distance(find(A.begin(), A.end(), 2), A.end());
    cout << x << " " << y << "\n";

    return 0;
}