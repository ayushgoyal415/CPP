#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Car {
    string m_name;
    int m_speed;
    Car(string name, int speed) : m_name(name), m_speed(speed){};

    // Overloading '<' operator
    bool operator<(Car const &other) const { return m_name < other.m_name; };

    // Overloading '>' operator
    bool operator>(Car const &other) const { return m_name > other.m_name; };

    // Overloading '==' operator
    bool operator==(const string name) const { return m_name == name; };
};

int main() {
    vector<Car> A = {Car("Maruti", 80), Car("Zen", 100), Car("Hyundai", 120)};

    // Sorting cars in ascending order based on name
    sort(A.begin(), A.end());
    for (auto &i : A) cout << "{" << i.m_name << " : " << i.m_speed << "} ";
    cout << '\n';

    // Sorting cars in descending order based on name
    sort(A.begin(), A.end(), [](Car &A, Car &B) { return A > B; });
    for (auto &i : A) cout << "{" << i.m_name << " : " << i.m_speed << "} ";
    cout << '\n';

    // Finding car by name
    auto it = find(A.begin(), A.end(), "Hyundai");
    cout << "Car named " << it->m_name << " found\n";

    //---------------------------------------------------------------------------
    // As we noticed that both generalised & class specific operator overloading
    // work well, but there's a problem
    //---------------------------------------------------------------------------
    // What if we want to sort or find cars based on speed now?
    // We cannot overload <, >, == multiple times with same args as this would
    // result in ambiguity.
    //---------------------------------------------------------------------------
    // Here comes the role of functor and lambda comparators
    //---------------------------------------------------------------------------

    return 0;
}