#include <iostream>
using namespace std;

int main() {
    string A[2][3] = {
        {"Cow", "Cattle", "Herbivorous"},
        {"Dog", "Pet", "Omnivorous"},
    };

    cout << "Size of string: " << sizeof(string) << "\n";

    cout << "Size of a two dimensional string array containing 6 words : "
         << sizeof(A) << "\n";

    cout << "Size of first row of a two dimensional array containing 2 rows, "
            "with 3 words each : "
         << sizeof(A[0]) << "\n";

    cout << "We can calculate the number of rows in a two dimensional by "
            "dividing the total size of the array with the size of any 1 row : "
         << sizeof(A) / sizeof(A[0]) << "\n";

    cout << "We can also output the values put in an array in the form of "
            "table by using 'for' loops and 'size of' commands as follows:\n";

    for (unsigned int i = 0; i < (sizeof(A) / sizeof(A[0])); i++) {
        for (unsigned int j = 0; j < (sizeof(A[0]) / sizeof(A[0][0])); j++)
            cout << A[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
