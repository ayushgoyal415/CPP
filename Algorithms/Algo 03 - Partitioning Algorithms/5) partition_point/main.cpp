#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print(auto s, auto st, auto en) {
    cout << s;
    for (st; st != en; st++) cout << *st << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Returns an iterator to the the first element where the partitions are
    // spearated based on the bool condition passed

    stable_partition(A.begin(), A.end(), [](int x) { return x % 2 == 0; });
    auto it =
        partition_point(A.begin(), A.end(), [](int x) { return x % 2 == 0; });

    print("The vector after stable partitioning :\n", A.begin(), A.end());

    cout << "Partition Point (idx) : " << distance(A.begin(), it)
         << ", Element : " << *it << "\n";

    print("Partition Group 1 : ", A.begin(), it);
    print("Partition Group 2 : ", it, A.end());

    return 0;
}