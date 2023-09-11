#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s = {"uuuuuunnrrreeaaadddaabblllleeee_____tttttteeeexxxttttt"};
    string t;
    unique_copy(s.begin(), s.end(), back_inserter(t));
    cout << s << " -> " << t << "\n";
    return 0;
}