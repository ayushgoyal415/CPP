#include <cmath>  // Used to calculate hypotenuse or magnitude
#include <iostream>
#include <map>
using namespace std;

// Note--------------Note------------------Note----------------Note------------
// Map is a sorted associative container that contains key-value pairs with
// unique keys. Keys are sorted by using the comparison function Compare.
// Search, removal, and insertion operations have logarithmic complexity. Maps
// are usually implemented as red-black trees.
// Note--------------Note------------------Note----------------Note------------
// As maps are non contiguous data structures we cannot use it + 1 or something
// But we can use it++ or it--
// Note--------------Note------------------Note----------------Note------------

struct Point {
    double x, y;
};

// Functor to compare the x-coordinates of two Point 'pointers'
struct PointCmp {
    bool operator()(const Point *lhs, const Point *rhs) const {
        return lhs->x < rhs->x;
    }
};

int main() {
    // Constructing an array of pointers
    Point P[3] = {{3, 0}, {5, 0}};

    // Constructing a map of Point pointers and doubles
    map<Point *, double, PointCmp> A({{&P[0], 4}, {&P[1], 12}});

    // Changing y-coordinate of Points from 0 to the supplied double value
    for (auto it = A.begin(); it != A.end(); it++) it->first->y = it->second;

    // Updating the double to indicate the magnitude of p.x and p.y
    for (auto it = A.begin(); it != A.end(); it++)
        it->second = hypot(it->first->x, it->first->y);

    // Printing the updated map
    for (auto it = A.begin(); it != A.end(); it++)
        cout << "{" << it->first->x << ", " << it->first->y << "} -> "
             << it->second << '\n';

    // Similarly we can also use .rend() and .rbegin()

    return 0;
}