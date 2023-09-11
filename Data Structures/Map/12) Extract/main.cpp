#include <iostream>
#include <map>
using namespace std;
//-----------------------------------------------------------------------------
// Methods of node extraction
//-----------------------------------------------------------------------------
// 1) Extractiing by providing iterator to the pos. Unlinks the node that
// contains the element pointed to by position and returns a node handle that
// owns it. Time compexity -> amortized constant
// 2) Extractiing by providing key -> If the container has an element with key
// equivalent to k, unlinks the node that contains that element from the
// container and returns a node handle that owns it. Otherwise, returns an empty
// node handle. Time compexity -> log(n)
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// In either case, no elements are copied or moved, only the internal pointers
// of the container nodes are repointed
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// Extracting a node invalidates only the iterators to the extracted element.
// Pointers and references to the extracted element remain valid, but cannot be
// used while element is owned by a node handle: they become usable if the
// element is inserted into a container.
//-----------------------------------------------------------------------------

void print(string s, map<int, char> const &A) {
    cout << s;
    for (auto it = A.begin(); it != A.end(); it++) {
        cout << "[" << it->first << ", " << it->second
             << ((it == --A.end()) ? "]" : "], ");
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, char> A{{1, 'a'}, {2, 'b'}, {3, 'c'}, {4, 'd'}, {5, 'e'}};

    print("Original Map : ", A);

    // Extracting node by using key
    auto nh = A.extract(5);
    print("After extracting [5] : ", A);
    nh.key() = 6, nh.mapped() = 'f';
    A.insert(move(nh));
    print("After reinserting nh : ", A);

    // Extarcting node by using iterator
    auto nh2 = A.extract(--A.end());
    print("After extracting --A.end() : ", A);
    nh2.key() = 5, nh2.mapped() = 'e';
    A.insert(move(nh2));
    print("After reinserting nh : ", A);

    // Trying to extracting node using a key which does not exist
    auto nh3 = A.extract(6);
    if(nh3.empty()) cout << "\nEmpty\n";

    return 0;
}