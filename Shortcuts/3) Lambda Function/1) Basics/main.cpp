#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    Syntax of lambda function
        [] : Sign of lambda function
        () : Arguments that it takes
        {} : Implementation
        () : Passing arguments
    */

    // Declaring and using lambda function by passing arguments
    cout << [](int x, int y) { return x + y; }(2, 3) << "\n";

    // Declaring a reusable lambda function by using auto keyword
    auto sum = [](int x, int y) { return x + y; };

    cout << sum(2, 3) << "\n";
    cout << sum(5, 4) << "\n";

    return 0;
}