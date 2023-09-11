#include <iostream>
#include <map>
using namespace std;

// Everything same as count(). It also has 2 methods same as count,
// The difference is that it returns an iterator instead.
// If no matching key found then it return iterator past the end().

struct Car {
    string m_name;
    int m_speed;
    Car(string name, int speed) : m_name(name), m_speed(speed){};
};

struct Cmp {
    bool operator()(Car const& lhs, Car const& rhs) const {
        return lhs.m_name < rhs.m_name;
    }
};

int main() {
    map<Car, float, Cmp> A{{Car("Alto", 80), 2.5f},
                           {Car("Santro", 120), 2.0f},
                           {Car("Zen", 100), 2.25f}};

    auto print = [&A](auto& it) {
        (it == A.end()) ? cout << "Key Not Found\n"
                        : cout << "Key : " << it->first.m_name << '.'
                               << it->first.m_speed << " Found\n";
    };

    // 1) Calling .find() by first constructing the key to find.
    auto it = A.find(Car{"Alto", 80});
    print(it);

    // 2) Calling .find() without constructing an instance of Key.
    it = A.find({"Alto", 80});
    print(it);

    // 3) Calling .find() on a key that does not exist
    it = A.find({"Verna", 160});
    print(it);

    // Note : Unlike STL algorithm find() or find_if(), find() does not require
    // comparator like '==' overload or struct Cmp. In fact it does not accept
    // any predicate. It is also a downside that we need to put in all the key
    // elements correctly for.eg. in this example I cannot find car Alto by just
    // its name, I have to supply Alto, 80 for it to work.

    // Note : There is another method named contains defined in C++ 20. It is
    // same as count() and find() but the only difference is that it returns a
    // boolean value

    return 0;
}