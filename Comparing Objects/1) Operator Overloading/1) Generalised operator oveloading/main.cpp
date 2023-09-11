#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Here we are trying to sort or find cars using STL algorithm. Note that these
// algs don't know how to compare cars. So we are overlaoding <, >, == operators

struct Car {
    string m_name;
    int m_speed;
    Car(string name, int speed) : m_name(name), m_speed(speed){};
};

// Overloading operators so that they can compare cars based on name
bool operator<(Car const &A, Car const &B) { return A.m_name < B.m_name; }
bool operator>(Car const &A, Car const &B) { return A.m_name > B.m_name; }
bool operator==(Car const &A, string name) { return A.m_name == name; }

int main() {
    vector<Car> A = {Car("Maruti", 80), Car("Zen", 100), Car("Hyundai", 120)};

    // Sorting cars in ascending order based on name (uses '<')
    sort(A.begin(), A.end());
    for (auto &i : A) cout << "{" << i.m_name << " : " << i.m_speed << "} ";
    cout << '\n';

    // Sorting cars in descending order based on name (uses '>')
    sort(A.begin(), A.end(), [](Car &A, Car &B) { return A > B; });
    for (auto &i : A) cout << "{" << i.m_name << " : " << i.m_speed << "} ";
    cout << '\n';

    // Finding car by name (uses '==')
    auto it = find(A.begin(), A.end(), "Hyundai");
    cout << "Car named " << it->m_name << " found\n";

    // Note : These operators will still retain their other functionality e.g.
    // comparing integers, strings etc. Hence the name operator overloading.

    return 0;
}