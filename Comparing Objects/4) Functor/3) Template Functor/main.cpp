#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// Constructing a template functor that can be used as comparator to sort any
// vector of pairs

struct Cmp {
    /*
    m_order :
    Enter 1 for sorting in ascending order
    Enter 2 for sorting in descending order

    m_element :
    Enter 1 for sorting based on first element of pair
    Enter 2 for sorting based on second element of pair
    */
    int m_order, m_element;
    Cmp(int order, int element) : m_order(order), m_element(element){};

    template <typename T>
    bool operator()(T const& p1, T const& p2) {
        return (m_order == 1) ? ((m_element == 1) ? p1.first < p2.first
                                                  : p1.second < p2.second)
                              : ((m_element == 1) ? p1.first > p2.first
                                                  : p1.second > p2.second);
    };
};

template <typename T>
void print(vector<T> const& A) {
    for (auto& i : A) cout << "{" << i.first << ", " << i.second << "}, ";
    cout << endl;
}

int main() {
    vector<pair<string, int>> A = {{"Zen", 100}, {"Alto", 80}, {"Santro", 120}};
    sort(A.begin(), A.end(), Cmp(2, 2));
    // Sorting in descending order based on 2nd element of pair (2,2)
    print(A);

    vector<pair<int, float>> B = {{1, 3.5}, {2, 2.5}, {3, 1.5}};
    sort(B.begin(), B.end(), Cmp(1, 1));
    // Sorting in ascending order based on 1st element of pair (1,1)
    print(B);

    return 0;
}