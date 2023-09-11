#include <iostream>
#include <map>
using namespace std;

// Defining a struct Point
struct Point {
    double x, y;
};

// Functor to compare the x-coordinates of two points
struct Functor {
    bool operator()(const Point &lhs, const Point &rhs) const {
        return lhs.x < rhs.x;
    }
};

void print(string s, auto &A) {
    cout << s;
    for (auto &p : A) {
        cout << p.first.x << '.' << p.first.y << '.' << p.second << " | ";
    }
    cout << "\n";
}

int main() {
    //------------------------------------------------------------------------------
    // Making a map of points with inplace object construction. Note : It is
    // must to pass in the sorting scheme to construct map from custom objects.
    // Here we are sorting by passing a functor comparator
    //------------------------------------------------------------------------------
    // Note : No need to have a constructor in struct if we construct points in
    // this way. Constructs objects in-place
    map<Point, double, Functor> A = {
        {{5, -12}, 13}, {{3, 4}, 5}, {{-8, -15}, 17}};

    print("Ascending x coordinate : ", A);

    //------------------------------------------------------------------------------
    // You could also pass a lambda function to provide sorting scheme
    //------------------------------------------------------------------------------
    auto LamCmp = [](const Point &p1, const Point &p2) { return p1.y < p2.y; };

    map<Point, double, decltype(LamCmp)> B(LamCmp);

    B[{5, -12}] = 13, B[{3, 4}] = 5, B[{-8, -15}] = 17;

    print("Ascending y coordinate : ", B);

    return 0;
}