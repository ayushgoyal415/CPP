#include <iostream>
#include <map>
using namespace std;

void print(map<char, string>::iterator const &it, bool b) {
    const char key = it->first;
    const string val = it->second;
    (b) ? cout << "Key value pair [" << key << ", " << val << "] inserted\n"
        : cout << "Key [" << key << "] assigned new value [" << val << "]\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Basically similar functionality as [] operator but insert_or_assign
    // returns more information does not require default-constructibility of the
    // mapped type. I guess it means that it can construct objects in place

    // Also we can get time complexity better than that of [] by sending
    // poisitional hint before which the object will be inserted

    // Return values -> iterator plus bool (true if insertion false if
    // assignment). If pos hint was sent then only iterator is returned

    map<char, string> A;

    const auto m_pr = A.insert_or_assign('b', "Ball");
    print(m_pr.first, m_pr.second);

    {
        const auto pr = A.insert_or_assign('b', "Banana");
        print(pr.first, pr.second);
    }
    {
        // Sending position hint
        const int n = A.size();
        const auto it = A.insert_or_assign(m_pr.first, 'a', "Aeroplane");
        print(it, A.size() != n);
    }
    {
        const int n = A.size();
        const auto it = A.insert_or_assign(m_pr.first, 'a', "Apple");
        print(it, A.size() != n);
    }

    for (auto const &i : A) cout << "[" << i.first << ", " << i.second << "], ";

    return 0;
}