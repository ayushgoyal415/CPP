#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Car {
    string m_name;
    int m_speed;
    Car(string name, int speed) : m_name(name), m_speed(speed){};
};

// Wrapping overloads into functions
bool CmpName(Car const& A, Car const& B) { return A.m_name < B.m_name; }
bool CmpSpeed(Car const& A, Car const& B) { return A.m_speed < B.m_speed; }
bool FndName(Car const& A) { return A.m_name == "Zen"; }

int main() {
    vector<Car> A = {Car("Maruti", 80), Car("Zen", 100), Car("Hyundai", 120)};

    // Sorting cars in ascending order based on name
    sort(A.begin(), A.end(), CmpName);
    for (auto& i : A) cout << "{" << i.m_name << " : " << i.m_speed << "} ";
    cout << '\n';

    // Sorting cars in ascending order based on speed
    sort(A.begin(), A.end(), CmpSpeed);
    for (auto& i : A) cout << "{" << i.m_name << " : " << i.m_speed << "} ";
    cout << '\n';

    // Finding a car named "Zen"
    auto it = find_if(A.begin(), A.end(), FndName);
    cout << "Car named " << it->m_name << " found\n";

    // These solve the problem associated with operator overloading
    // We can make as many functions as we want
    // But there is one problem with such functions, these functions can't
    // maintian a state. For e.g. we can't use them to find object in an array
    // based on name or speed. This is beacuse we can't pass functions to find()
    // as find does not accept a predicate. We can pass them to find_if, but for
    // each thing to find, we have to reset the name in the function
    // accordingly leading to inconvenience.

    return 0;
}