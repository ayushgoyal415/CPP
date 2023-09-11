#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cin >> a >> b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "The integer 'a' is now set to : " << a << "\n";
    cout << "The integer 'b' is now set to : " << b << "\n";

    return 0;
}
