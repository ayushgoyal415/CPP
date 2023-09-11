#include <iostream>
using namespace std;

// Sometimes we need one name for two or more template functions that differ
// based on the argument supplied

// As in the following example we want to use default equals function for all
// types except for floats
template <typename T>
bool equals(T lhs, T rhs) {
    return lhs == rhs;
}

// Specialing equals template function for floats
template <>
bool equals<float>(float lhs, float rhs) {
    if (rhs == lhs) return true;
    if (rhs < lhs && rhs > (lhs - 0.001)) return true;
    if (rhs > lhs && rhs < (lhs + 0.001)) return true;
    return false;
}

int main() {
    cout << boolalpha << equals(1, 1) << endl;
    cout << boolalpha << equals(1.f + 0.2f, 1.2f) << endl;

    // This works fine for floats. But what if we are comparing two doubles
    // Now we need to make a special template for doubles
    // Now what about long doubles and so on..

    // So if we end up making so many template apecialisations then the benefit
    // of using template function is lost. So we can access these special
    // template classes from c++ library and implement them using tad dispatch
    // or SFINAE

    return 0;
}