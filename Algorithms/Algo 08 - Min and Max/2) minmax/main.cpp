#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Returns <references> to minimum and maximum of the two elements or init
    // list

    auto il = {1, 2, 3, 4, 5};
    auto pr1 = minmax(il);
    cout << "Min ele : " << pr1.first << ", Max ele : " << pr1.second << "\n";

    string A = "hello", B = "basket";
    auto pr2 =
        minmax(A, B, [](string x, string y) { return x.size() < y.size(); });
    cout << "Min str : " << pr2.first << ", Max str : " << pr2.second << "\n";

    return 0;
}