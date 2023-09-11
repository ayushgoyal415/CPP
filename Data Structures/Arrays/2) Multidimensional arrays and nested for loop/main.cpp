#include <iostream>
using namespace std;

int main() {
    string animals[2][3] = {{"Cow", "Cattle", "Herbivorous"},
                            {"Dog", "Pet", "Omnivorous"}};

    cout << "Two dimensional array: \n\n";
    cout << animals[0][0] << " ";
    cout << animals[0][1] << " ";
    cout << animals[0][2] << "\n";
    cout << animals[1][0] << " ";
    cout << animals[1][1] << " ";
    cout << animals[1][2] << "\n\n\n";

    cout << "Using 'nested' for-loop to make table from 2D array:\n\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << animals[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
