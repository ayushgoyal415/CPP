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
    vector<Car> A = {Car("Alto", 80), Car("Zen", 100), Car("Hyundai", 120)};

    // Cpature[] provides the state to lambda function
    /*
    Default Capture Modes :
    [&] capture evetything by reference
    [=] capture everything by value that is make a copy
    [this] used when calling a function in lambda
    */

    // Finding car by name -> Similar to functor we cannot pass lambda as
    // predicate into find() so we use find_if() instead

    // Note that here we are capturing an outside variable with reference which
    // can be accessed inside lamdba function
    string name = "Zen";
    auto L1 = [&name](Car const& A) { return name == A.m_name; };
    auto it = find_if(A.begin(), A.end(), L1);
    cout << "Car named " << it->m_name << " found\n";

    // Note here we defining a variable 'speed' in capture which can then be
    // accessed inside lamda function
    auto L2 = [speed = 120](Car const& A) { return speed == A.m_speed; };
    it = find_if(A.begin(), A.end(), L2);
    cout << "Car named " << it->m_name << " having speed of " << it->m_speed
         << " found\n";

    return 0;
}