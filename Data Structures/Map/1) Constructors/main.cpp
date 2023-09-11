#include <iostream>
#include <map>
using namespace std;

// Overloading << operator to print map
template <typename T, typename U>
ostream& operator<<(ostream& os, map<T, U> const& A) {
    for (auto const& p : A) os << p.first << "." << p.second << "  ";
    return os;
}

int main() {
    // Default Constructor and then using [] to insert
    map<string, int> A;
    A["One"] = 1, A["Two"] = 2, A["Three"] = 3;
    cout << "Default A : " << A << "\n";

    // Copy Constructor
    map<string, int> B(A);
    cout << "Copied A : " << B << "\n";

    // Range based Copy Constructor
    map<string, int> C(A.find("Three"), A.end());
    cout << "Range A : " << C << "\n";

    // Move Constructor
    map<string, int> D(move(A));
    cout << "Move A : " << D << "\n";
    cout << "A moved : " << A << "\n";

    // Initialisation list
    map<string, int> E{{"One", 1}, {"Two", 2}, {"Three", 3}};
    cout << "Initial : " << E << "\n";

    return 0;
}