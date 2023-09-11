#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Remove and erase functions go hand in hand
    // Remove function returns a logical iterator that can then be used to
    // actually erase the elements using erase function

    string s = "Broeewneee";
    int sz1 = s.size();
    string s1 = s;

    // Getting the logical iterator representing areas to remove
    auto it = remove(s.begin(), s.end(), 'e');
    int sz2 = s.size();
    string s2 = s;

    // Actually removing elements using the logical iterator
    s.erase(it, s.end());
    int sz3 = s.size();
    string s3 = s;

    cout << "Before remove -> String : " << s1 << ", Size : " << sz1 << "\n";
    cout << "After remove  -> String : " << s2 << ", Size : " << sz2 << "\n";
    cout << "After s.erase -> String : " << s3 << ", Size : " << sz3 << "\n";

    return 0;
}