#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Syntax
    // int (*p) = &(int)
    // e.g. : int *p = &n;

    int n;
    cin >> n;
    // Calling out the address of the value
    cout << "Address via '&' operator : " << &n << "\n";
    // Getting value by dereferencing an address
    cout << "Value via '&' operator : " << *(&n) << "\n";
    // Storing address of the value into an 'int *'
    int *p = &n;
    // Getting address stored in an 'int *'
    cout << "Address via 'int *' : " << p << "\n";
    // Getting value by dereferencing an 'int *'
    cout << "Value via 'int *' : " << *p << "\n";

    return 0;
}