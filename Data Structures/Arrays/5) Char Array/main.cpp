#include <iostream>
using namespace std;

int main() {
    // Char arrays have two constructors
    // Firstly it can be made from different characters
    // Secondly it can be made from string

    char A[] = {'a', 'p', 'p', 'l', 'e'};
    char B[] = "apple";

    cout << "Size of A : " << sizeof(A) << "\n";
    cout << "Size of B : " << sizeof(B) << "\n";

    // Iterating through a char array made of characters
    for (int i = 0; i < sizeof(A); i++) cout << A[i] << " ";
    cout << "\n";

    // Iterating through a char array made from string
    // Note that the string bring with them an extra character
    // This character is known as nord terminator
    for (int i = 0; i < sizeof(B); i++) cout << B[i] << " ";
    cout << "\n";

    // Finding nord terminator by casting char to integer
    for (int i = 0; i < sizeof(B); i++) cout << (int)B[i] << " ";
    cout << "\n";

    // How to iterate without printing nord terminator
    for (int i = 0; B[i] != 0; i++) cout << B[i] << " ";
    cout << "\n";

    return 0;
}