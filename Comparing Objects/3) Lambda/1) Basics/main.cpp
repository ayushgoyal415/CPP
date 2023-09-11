#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Car {
    string m_name;
    int m_speed;
    Car(string name, int speed) : m_name(name), m_speed(speed){};
};

int main() {
    vector<Car> A = {Car("Maruti", 80), Car("Zen", 100), Car("Hyundai", 120)};

    // Sorting cars in ascending order based on name
    auto L1 = [](Car const &A, Car const &B) { return B.m_name < B.m_name; };
    sort(A.begin(), A.end(), L1);
    for (auto &i : A) cout << "{" << i.m_name << " : " << i.m_speed << "} ";
    cout << '\n';

    // Sorting cars in descending order based on speed
    auto L2 = [](Car const &A, Car const &B) { return A.m_speed < B.m_speed; };
    sort(A.begin(), A.end(), L2);
    for (auto &i : A) cout << "{" << i.m_name << " : " << i.m_speed << "} ";
    cout << '\n';

    // Using find_if to find a car (cannot pass lamda function in find)
    // Finding a car named "Zen"
    auto L3 = [](Car const &A) { return A.m_name == "Zen"; };
    auto it = find_if(A.begin(), A.end(), L3);
    cout << "Car named " << it->m_name << " found\n";

    // This type of lambda function is also not very good as we have to create
    // lambda function each time we want to find with a new method. But luckily
    // lambda functions can maintain a state using capture.

    return 0;
}