#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Partition will separate the elements as desired but it will not maintain
    // the relative order while doing so

    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Creating a partition so that all the even and odd elements are separated
    partition(A.begin(), A.end(), [](int x) { return x % 2 == 0; });

    for (auto &i : A) cout << i << " ";

    // Partitions can also be used to construct quick sort algorithm

    return 0;
}