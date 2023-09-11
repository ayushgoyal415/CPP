#include <iostream>
#include <map>
using namespace std;

// Example module 97 key compare function
struct Cmp {
    bool operator()(const int lhs, const int rhs) const {
        return (lhs % 97) < (rhs % 97);
    }
};

int main() {
    map<int, char, Cmp> A;
    A = {{1, 'a'}, {2, 'b'}, {3, 'c'}, {4, 'd'}, {5, 'e'}};

    auto k_cmp = A.key_comp();

    for (auto const &i : A) {
        bool is_before = k_cmp(i.first, 100);
        bool is_after = k_cmp(100, i.first);

        cout << '(' << i.first << ',' << i.second << ')';
        if (is_before) cout << " goes before key 100\n";
        if (is_after) cout << " goes after key 100\n";
        if (!is_before && !is_after)
            cout << " equal to key 100 so either key [3] or [100] will get "
                    "inserted and not both\n";
    }
}