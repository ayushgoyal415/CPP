#include <iostream>
#include <map>
using namespace std;

void print(map<string, int>::iterator const& it, bool const& b) {
    const string key = it->first;
    const int val = it->second;
    (b) ? cout << "[" << key << ", " << val << "] pair emplaced\n"
        : cout << "Key [" << key << "] already present\n";
}

int main() {
    // Inserts a new element into the container constructed in-place with the
    // given args if there is no element with the key in the container.

    // Careful use of emplace allows the new element to be constructed while
    // avoiding unnecessary copy or move operations. The constructor of the new
    // element is called with exactly the same arguments as supplied to emplace.

    // Note : The element may be constructed even if there already is an element
    // with the key in the container, in which case the newly constructed
    // element will be destroyed immediately.

    // Returns a pair consisting of an iterator to the inserted element, or the
    // already-existing element if no insertion happened, and a bool denoting
    // whether the insertion took place or not.

    map<string, int> A;

    auto pr = A.emplace("One", 1);
    print(pr.first, pr.second);

    {
        auto pr = A.emplace("One", 1);
        print(pr.first, pr.second);
    }
    return 0;
}