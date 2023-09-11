#include <iostream>
using namespace std;

int main() {
    int int_array[4] = {545, 454, 78, 225};
    double double_array[4] = {45.2, 8.6, 14.2, 78.5};
    int new_int_array[5] = {};
    string string_array[] = {"Apple", "Banana", "Orange", "Pineapple", "Pear"};

    cout << "List of arrays of integers:\n\n";
    cout << "1) " << int_array[0] << "\n";
    cout << "2) " << int_array[1] << "\n";
    cout << "3) " << int_array[2] << "\n";
    cout << "4) " << int_array[3] << "\n\n";

    cout << "Using 'for' loop to enlist elements stored in an array: \n\n";
    for (int i = 0; i < 4; i++) {
        cout << "Element stored in double_array at index " << i << ": "
             << double_array[i] << "\n";
    }

    cout << "\nUsing 'for' loop to set elements in an array: \n\n";
    for (int i = 0; i < 4; i++) {
        int_array[i] = 54;
        cout << "Element now stored in int_array at index " << i << ": "
             << int_array[i] << "\n";
    }

    cout << "\nUninitialized Array: \n\n";
    for (int i = 0; i < 4; i++) {
        cout << "Element stored in new_int_array at index " << i << ": "
             << new_int_array[i] << "\n";
    }

    cout << "\nArray of strings: \n\n";
    for (int i = 0; i < 4; i++) {
        cout << "Element stored in string_array at index " << i << ": "
             << string_array[i] << "\n";
    }

    return 0;
}
