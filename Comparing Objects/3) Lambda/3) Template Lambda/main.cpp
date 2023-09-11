#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void print(vector<T> const& A) {
    for (auto& i : A) cout << "{" << i.first << ", " << i.second << "}, ";
    cout << endl;
}

int main() {
    // Constructing a template lambda that can be used as comparator to sort any
    // vector of pairs

    int order, ele;
    auto Cmp = [&](auto const& p1, auto const& p2) {
        return (order == 1)
                   ? ((ele == 1) ? p1.first < p2.first : p1.second < p2.second)
                   : ((ele == 1) ? p1.first > p2.first : p1.second > p2.second);
    };

    vector<pair<string, int>> A = {{"Zen", 100}, {"Alto", 80}, {"Santro", 120}};
    // Sorting in descending order based on 2nd element of pair (2,2)
    order = 2, ele = 2;
    sort(A.begin(), A.end(), Cmp);
    print(A);

    vector<pair<int, float>> B = {{1, 3.5}, {2, 2.5}, {3, 1.5}};
    // Sorting in ascending order based on 1st element of pair (1,1)
    order = 1, ele = 1;
    sort(B.begin(), B.end(), Cmp);
    print(B);

    // Using lambda in-line implementation
    // Sorting in descending order based on 1st element of pair
    sort(A.begin(), A.end(),
         [](auto const& p1, auto const& p2) { return p1.first > p2.first; });
    print(A);

    return 0;
}