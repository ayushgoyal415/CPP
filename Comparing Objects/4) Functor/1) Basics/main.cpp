#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Car {
    string m_name;
    int m_speed;
    Car(string name, int speed) : m_name(name), m_speed(speed){};
};

// Creating a functor to comapare cars based on name
struct CmpName {
    bool operator()(Car const &A, Car const &B) const {
        return A.m_name < B.m_name;
    }
};

// Creating a functor to compare cars based on speed
struct CmpSpeed {
    bool operator()(Car const &A, Car const &B) const {
        return A.m_speed < B.m_speed;
    }
};

// Creating a functor to find car named Zen
struct FndName {
    bool operator()(Car const &A) const { return A.m_name == "Zen"; }
};

int main() {
    vector<Car> A = {Car("Maruti", 80), Car("Zen", 100), Car("Hyundai", 120)};

    //---------------------------------------------------------------------------
    // Sorting cars in ascending order based on name. Here we are passing an
    // object made from functor class 'CmpName' as comparator
    //---------------------------------------------------------------------------
    CmpName cmp_name;
    sort(A.begin(), A.end(), cmp_name);
    for (auto const &i : A)
        cout << "{" << i.m_name << " : " << i.m_speed << "} ";
    cout << '\n';

    //---------------------------------------------------------------------------
    // Sorting cars in ascending order based on speed.
    // Here we are constructing object in-place.
    //---------------------------------------------------------------------------
    // Note : Here () is not functor class's function call operator overload, it
    // is the class constructor parameter. We can pass args into this while
    // constructing functor objects with state. See next code for reference.
    //---------------------------------------------------------------------------

    sort(A.begin(), A.end(), CmpSpeed());
    for (auto const &i : A)
        cout << "{" << i.m_name << " : " << i.m_speed << "} ";
    cout << '\n';

    // Cannot pass a functor into find() so using find_if instead
    auto it = find_if(A.begin(), A.end(), FndName());
    cout << "Car named " << it->m_name << " found\n";

    // Note here we defined a functor to find Zen car specifically. But we make
    // more generic functors to find any car that we want. See functor with
    // state.

    return 0;
}