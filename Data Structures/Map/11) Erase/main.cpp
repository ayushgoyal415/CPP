#include <iostream>
#include <map>
using namespace std;

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

    // Returns an iterator following the last removed element if args were
    // passed int he form of iterator(s). This is helpful because references and
    // iterators to the erased elements are invalidated after operation. Thus
    // this helps to keep the 'for' loop alive. See removal of even numbers
    // using this trick. Note : Other references and iterators are not affected.

    map<int, char> A{{1, 'a'}, {2, 'b'}, {3, 'c'}, {4, 'd'}, {5, 'e'},
                     {6, 'f'}, {7, 'g'}, {8, 'h'}, {9, 'i'}, {10, 'j'}};

    print("Original Map : ", A);

    {
        // Erasing a key directly
        A.erase(4);
        print("After erasing [4] : ", A);
    }

    {
        // Erasing using an iterator
        // Returns iterator following the last removed element.
        auto it = A.erase(++A.begin());
        print("After erasing at ++A.begin() : ", A);
        cout << "Iterator returned to the next element [" << it->first << ", "
             << it->second << "]\n";
    }

    {
        // Erasing even numbers using iterator returned
        for (auto it = A.begin(); it != A.end();)
            (it->first % 2 == 0) ? it = A.erase(it) : it++;
        print("After erasing all even keys : ", A);
    }

    {
        // Erasing a range
        // Returns iterator following the last removed element.
        auto it = A.erase(++A.begin(), --A.end());
        print("After erasing range ++A.begin() to --A.end() : ", A);
        cout << "Iterator returned to the next element [" << it->first << ", "
             << it->second << "]\n";
    }

    return 0;
}