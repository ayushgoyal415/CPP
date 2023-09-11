
#include <iostream>
#include <map>
using namespace std;

// Returns a function object that compares objects of type
// std::map::value_type (key-value pairs) by using key_comp to compare the
// first components of the pairs.

// Example module 97 key compare function
struct Cmp {
    bool operator()(const int lhs, const int rhs) const {
        return (lhs % 97) < (rhs % 97);
    }
};

int main() {
    map<int, char, Cmp> A;
    A = {{1, 'a'}, {2, 'b'}, {3, 'c'}, {4, 'd'}, {5, 'e'}};

    auto v_cmp = A.value_comp();

    const pair<int, char> pr = {100, 'a'};

    for (auto const& i : A) {
        bool before = v_cmp(i, pr);
        bool after = v_cmp(pr, i);

        cout << '(' << i.first << ',' << i.second << ')';
        if (before) cout << " goes before key " << pr.first << '\n';
        if (after) cout << " goes after key " << pr.first << '\n';
        if (!before && !after)
            cout << " is equivalent to key " << pr.first << '\n';
    }
}