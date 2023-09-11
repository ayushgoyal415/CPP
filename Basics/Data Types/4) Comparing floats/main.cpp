#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    float value_1 = 1.1;

    cout << "\nNote : In the following e.g. float value is assigned as 1.1\n";
    cout << "In fixed format at set precision(20) is read as follows: ";
    cout << fixed << setprecision(20) << value_1 << "\n\n";

    cout << "SCENARIO 1 (Float value not precise)\n";
    cout << "----------\n";

    cout << "Float values are never completely precise so we can never use "
            "'if-else' statements saying if float value equals to this "
            "particular number.\n";

    cout << " - For e.g. In the following program, the float value is assigned "
            "as 1.1 and when we use 'if-else' statement stating whether the "
            "assigned value is equal to 1.1 or not; the computer chooses the "
            "'else statement'.\n";

    cout << " - Type '1' below and press 'Enter' to run this 'if-else' "
            "statement.\n\n";

    cout << "SCENARIO 2 (Float value approaching precision)\n";
    cout << "----------\n";

    cout << "Notice that float values are greater than the actual value after "
            "7 digit places. So in order to compare floats, we can design "
            "'if-else' statements in 'greater than' or 'less than' forms.\n";

    cout << " - For e.g. Now in the following program, the 'if-else' statement "
            "is designed stating: \n";

    cout << "   Is the assigned value greater than or equal to 1.1 or not; in "
            "this case it chooses the 'if' statement.\n";
    cout << " - Type '2' below and press 'Enter' to run this 'if-else' "
            "statement.\n\n";

    cout << "Type your option and hit 'Enter' >>> ";
    int user_input;
    cin >> user_input;
    cout << "\n";

    if (user_input == 1) {
        if (value_1 == 1.1) {
            cout << "Scenario 1 >> 'If' statement selected: Yes, the assigned "
                    "value is equal to 1.1\n\n";
        } else {
            cout << "Scenario 1 >> 'Else' statement selected: No, the assigned "
                    "value is not equal to 1.1\n\n";
        }
    }

    else if (user_input == 2) {
        if (value_1 >= 1.1) {
            cout << "Scenario 2 >> If statement selected: Yes, the assigned "
                    "value is greater than or equal to 1.1\n\n";
        } else {
            cout << "Scenario 2 >> Else statement selected: No, the assigned "
                    "value is not greater than or equal to 1.1\n\n";
        }
    }

    else if (user_input >= 3 || user_input <= 0)
        cout << "Invalid Input.\n";

    return 0;
}
