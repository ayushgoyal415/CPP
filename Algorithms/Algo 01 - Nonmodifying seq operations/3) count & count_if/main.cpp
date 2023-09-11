#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // count : counts the numbers of elements matching a target value
    // count_if : counts the number of elements satisfying a bool condition

    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2};

    // Counting the number of elements matching each target using count
    for (int target : {1, 2, 3}) {
        int ans = count(A.begin(), A.end(), target);
        cout << "Target : " << target << ", Count : " << ans << "\n";
    }

    // Counting elements divisble by 3 using count-if and bool function
    int ans = count_if(A.begin(), A.end(), [](int x) { return x % 3 == 0; });
    cout << "Bool condition : x % 3 == 0, Count : " << ans << "\n";

    return 0;
}