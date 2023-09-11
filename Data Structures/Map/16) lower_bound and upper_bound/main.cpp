#include <iostream>
#include <map>
using namespace std;

// Both are very similar to find()

struct Nums {
    int x, y;
};
struct Cmp {
    bool operator()(Nums const& A, Nums const& B) const { return A.x < B.y; };
};

int main() {
    map<Nums, char, Cmp> A{{{1, 2}, 'a'}, {{3, 4}, 'c'}, {{5, 6}, 'e'}};

    auto print = [&A](string s, auto& it) {
        cout << s;
        (it == A.end()) ? cout << "Not Found\n"
                        : cout << "Found -> " << it->first.x << ','
                               << it->first.y << " : " << it->second << '\n';
    };

    // Lower bound returns an it pointing to the first element greater than key.
    // If no such element is found, a past-the-end iterator is returned.
    auto it = A.lower_bound(Nums{2, 3});
    print("Lower Bound of 2,3 : ", it);

    it = A.lower_bound({3, 4});
    print("Lower Bound of 3,4 : ", it);

    it = A.lower_bound({5, 6});
    print("Lower Bound of 5,6 : ", it);

    // Upper bound returns an iterator pointing to the first element that is not
    // less than key (i.e. greater or equal to key).
    it = A.upper_bound(Nums{2, 3});
    print("Upper Bound of 2,3 : ", it);

    it = A.upper_bound({5, 6});
    print("Upper Bound of 5,6 : ", it);

    it = A.upper_bound({6, 7});
    print("Upper Bound of 6,7 : ", it);

    return 0;
}