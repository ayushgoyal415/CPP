#include <iostream>
#include <vector>
#include <set>
using namespace std;

// Using auto to print any container type

void print(auto& A) {
    for (auto& i : A) cout << i << " ";
    cout << "\n";
}

int main() {
    // Using auto to construct initializer list
    auto a = {1, 3, 5, 2, 9, 6, 8};
    print(a);

    // Using auto to assign values to any type of container
    vector<int> v = a;
    set<int> s = a;
    print(v), print(s);

    return 0;
}