#include <iostream>
#include <type_traits>  // Include this library to get access to SFINAE and tag dispatch
using namespace std;

// We can to use this template for all use cases except for floating points
// because they lack percision and therefore need different implementation. But
// there can be multiple types of floaating points like floats, doubles, long
// doubles

// There are two ways to differentiate between floating point and non floating
// type arguments : tag dispatch and SFINAE (both are hard as hell). Here SFINAE
// is used

template <typename T>
enable_if_t<!is_floating_point<T>::value, bool> equals(T lhs, T rhs) {
    return lhs == rhs;
}

template <typename T>
enable_if_t<is_floating_point<T>::value, bool> equals(T lhs, T rhs) {
    if (rhs == lhs) return true;
    if (rhs < lhs && rhs > (lhs - 0.001)) return true;
    if (rhs > lhs && rhs < (lhs + 0.001)) return true;
    return false;
}

int main() {
    cout << boolalpha << equals(1, 1) << endl;
    cout << boolalpha << equals(1.f + 0.2f, 1.2f) << endl;
    cout << boolalpha << equals(1. + 0.2, 1.2) << endl;

    return 0;
}