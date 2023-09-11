#include <iostream>
using namespace std;

int main() {
    cout << "Using size of arrays, we can find the total number of values "
            "stored in an array\n\n";

    cout << "Put in 1 to find size of 'int'\n";
    cout << "Put in 2 to find size of an array with both brackets not filled\n";
    cout << "Put in 3 to find size of an array with 4 values\n";
    cout << "Put in 4 to find the size of an array containing 519280 values\n";
    cout << "Put in 5 to find the use of calculating the size of array\n\n";

    cout << "Put your response here > ";
    int user_input;
    cin >> user_input;
    cout << "\n\n";

    if (user_input == 1)
        cout << sizeof(int) << "\n";

    else if (user_input == 2) {
        int array1[] = {};
        cout << sizeof(array1) << "\n";
    }

    else if (user_input == 3) {
        int array2[4] = {};
        cout << sizeof(array2) << "\n";
    }

    else if (user_input == 4) {
        int array3[519280] = {};
        cout << sizeof(array3) << "\n";
    }

    else if (user_input == 5) {
        cout << "It can be used to find the total number of values in an array "
                "as follows: \n";
        cout << "Total number of values in an array = Size of that array/Size "
                "of any value stored in that array\n";
    }

    return 0;
}
