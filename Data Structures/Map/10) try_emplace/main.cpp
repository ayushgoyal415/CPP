#include <iostream>
#include <map>
using namespace std;

void print(map<int, string>::iterator const& it, bool const& b) {
    const int key = it->first;
    const string val = it->second;
    (b) ? cout << "[" << key << ", " << val << "] pair emplaced\n"
        : cout << "Key [" << key << "] already present\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //------------------------------------------------------------------------
    // Main difference
    //------------------------------------------------------------------------
    // Inserts in-place if the key does not exist, does nothing if the key
    // exists. This is different from insert or emplace, which construct the
    // element and then delete it if not inserted, thus wasting time.
    // This property makes it easy to manipulate maps whose values are move-only
    // types. For e.g. -> map<string, unique_ptr<foo>>. The values in this
    // example are unique_ptr which can only be moved and not copied
    //------------------------------------------------------------------------

    //------------------------------------------------------------------------
    // Args are same as emplace(key, value) and emplace_hint(pos, key, value).
    // But it treats the key and the arguments to the mapped_type separately,
    // unlike emplace, which requires the arguments to construct a value_type
    // (that is, a std::pair). So we can construct key and value separately.
    //------------------------------------------------------------------------

    // Return values same as emplace (it + bool) and emplace_hint(it)

    map<int, string> A;
    {
        const auto pr = A.try_emplace(2, "tt");
        print(pr.first, pr.second);
    }

    {
        // Inserting three ts using constructer for string separately
        const auto pr = A.try_emplace(3, 3, 't');
        print(pr.first, pr.second);
    }
    {
        // Emplace hint
        const int n = A.size();
        const auto it = A.try_emplace(A.begin(), 1, "o");
        print(it, A.size() != n);
    }
    {
        // Sending a wrong hint
        const int n = A.size();
        const auto it = A.try_emplace(A.begin(), 4, 4, 'f');
        print(it, A.size() != n);
    }
    {
        // Trying to reinsert a key
        const auto pr = A.try_emplace(3, 3, 't');
        print(pr.first, pr.second);
    }

    for (auto it = A.begin(); it != A.end(); it++) {
        cout << "[" << it->first << ", " << it->second
             << ((it == --A.end()) ? "]" : "], ");
    }
    return 0;
}