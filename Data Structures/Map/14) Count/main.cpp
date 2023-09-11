#include <iostream>
#include <map>
using namespace std;

// Returns the number of elements with key that compares equivalent to the
// specified argument. This is either 1 or 0 as map does not allow duplicates.

struct Car {
    string m_name;
    int m_speed;
    Car(string name, int speed) : m_name(name), m_speed(speed){};
};

// Functor Comparator
struct Cmp {
    bool operator()(Car const& lhs, Car const& rhs) const {
        return lhs.m_name < rhs.m_name;
    }
};

int main() {
    // Building a Map of {cars(name, speed) and number of units sold (in
    // millions)}

    map<Car, float, Cmp> A{{Car("Alto", 80), 2.5f},
                           {Car("Santro", 120), 2.0f},
                           {Car("Zen", 100), 2.25f}};

    //--------------------------------------------------------------------
    // Methods of using count
    //--------------------------------------------------------------------

    // 1) Calling .count() by first constructing the key to find.
    cout << A.count(Car{"Alto", 80}) << '\n';

    // 2) Calling .count() without constructing an instance of Key.
    cout << A.count({"Alto", 80}) << '\n';

    // Note : Unlike STL algorithm find() or find_if(), count() does not require
    // comparator like '==' overload or struct Cmp. Infact it does not accept
    // any predicate. It is also a downside that we need to put in all the key
    // elements correctly for.eg. in this example I cannot find car Alto by just
    // its name, I have to suppy Alto, 80 for it to work.

    return 0;
}