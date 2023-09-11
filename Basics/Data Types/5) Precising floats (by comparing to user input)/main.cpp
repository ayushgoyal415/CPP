#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    float value_1 = 1.1;

    cout << "In this program, float value is taken as 1.1, which is depicted "
            "in fixed set precision(20) as follows: \n"
         << fixed << setprecision(20) << value_1 << "\n\n";

    cout << "Although float values are never completely precise but we can "
            "precisely compare float values by comparing user input values to "
            "float values and using if-else statements saying whether float "
            "value equals to the input value.\n";

    cout << "In such cases the computer precisely detects that the float value "
            "is indeed same as input value, making float value precise.\n\n";

    cout << "For e.g. Try typing in value 1.1 which is stored as float value. "
            "If computer recognize the typed in value and the float value same "
            "then it will choose the if statement.\n\n";

    cout << "Go on and type 1.1 here and hit 'Enter' > ";
    float value_2;
    cin >> value_2;
    cout << "\n";

    if (value_1 == value_2) {
        cout << "If statement selected: Typed in value and assigned float "
                "value are same\n";
    } else {
        cout << "Else statement selected: Typed in value and assigned float "
                "value are different\n";
    }

    return 0;
}
