#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int gen1() {
    static int i = 1;
    return i++;
}
int gen2() {
    static int i = 1;
    return (i *= 2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Arguments
    // 1, 2) starting and ending iters of the ds in which you want to generate
    // 3) an object generator (i.e. function) of return type

    vector<int> A(5);
    generate(A.begin(), A.end(), gen1);
    for (auto &i : A) cout << i << " ";
    cout << "\n";

    generate_n(A.begin(), 5, gen2);
    for (auto &i : A) cout << i << " ";
    cout << "\n";

    return 0;
}