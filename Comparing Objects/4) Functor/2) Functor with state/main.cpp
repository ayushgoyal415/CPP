#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Car {
    string m_name;
    int m_speed;
    Car(string name, int speed) : m_name(name), m_speed(speed){};
};

// Creating a functor to find a car by name
struct FndName {
    string m_name;
    FndName(string name) : m_name(name){};
    bool operator()(Car const &A) const { return A.m_name == m_name; }
};

// Creating a functor to find a car by speed
struct FndSpeed {
    int m_speed;
    FndSpeed(int speed) : m_speed(speed){};
    bool operator()(Car const &A) const { return A.m_speed == m_speed; };
};

// Creating a more generic functor which can find a car by name and speed both
struct Fnd {
    int m_speed = 0;
    string m_name = "";
    Fnd(int speed) : m_speed(speed){};
    Fnd(string name) : m_name(name){};
    bool operator()(Car const &A) const {
        return ((A.m_name == m_name) || (A.m_speed == m_speed));
    };
};

int main() {
    vector<Car> A = {Car("Maruti", 80), Car("Zen", 100), Car("Hyundai", 120)};

    //--------------------------------------------------------------------------
    // Note : We cannot pass a functor or lamda function into find() as it does
    // not accept a predicate. So we have to use find_if() instead
    //--------------------------------------------------------------------------
    // Note : In the following examples we are passing arguments into parameters
    // of comaparators. This invokes the specific constructer to construct the
    // object with a particular state. Eg. in 1st case this sets the functor
    // object's m_name to Zen. The object then maintains this state thus
    // allowing comparision with other car names using '()' overloaded method
    //--------------------------------------------------------------------------
    {
        // Finding car by name
        auto it = find_if(A.begin(), A.end(), FndName("Zen"));
        cout << "Car Found : " << it->m_name << '.' << it->m_speed << '\n';
    }
    {
        // Finding car by speed
        auto it = find_if(A.begin(), A.end(), FndSpeed(80));
        cout << "Car Found : " << it->m_name << '.' << it->m_speed << '\n';
    }
    {
        // Finding a car by using a generic functor
        auto it = find_if(A.begin(), A.end(), Fnd("Zen"));
        cout << "Car Found : " << it->m_name << '.' << it->m_speed << '\n';
    }
    {
        // Finding a car by using a generic functor
        auto it = find_if(A.begin(), A.end(), Fnd(80));
        cout << "Car Found : " << it->m_name << '.' << it->m_speed << '\n';
    }

    return 0;
}