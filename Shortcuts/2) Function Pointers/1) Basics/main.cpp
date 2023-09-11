#include <iostream>
using namespace std;

int sum(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    Syntax of function pointer
        Return type : e.g. int, void, string etc.
        (*name)     : e.g. (*fp) (Note : pointer must be before name)
        (arguments) : e.g. (int, int), (int), (string) etc.
    */

    // Creating a function pointer
    int (*fp)(int, int);

    // Assigning function pointer to address of a function
    //(Note : address of a function is just its name i.e. without ())
    fp = sum;
    cout << fp(5, 2) << "\n";

    // Reassigning function pointer to another function with similar characters
    fp = sub;
    cout << fp(5, 2) << "\n";

    // Declaring function pointer quickly using auto keyword
    auto fp2 = sum;
    cout << fp2(5, 2) << "\n";
    fp2 = sub;
    cout << fp2(5, 2) << "\n";

    return 0;
}