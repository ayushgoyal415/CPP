#include <iostream>
using namespace std;

void function_for_menu() {
    cout << "Program features : \n";
    cout << "1) Search\n";
    cout << "2) View record\n";
    cout << "3) Quit\n\n";
}

// 'void' is function meaning 'no return type'. So know we change the function
// to 'int' because we want to return an integer value to the function below. we
// can return integers, floats, doubles using 'int' function but there is no
// simple way to return 'int' arrays.

int function_for_user_input() {
    cout << "Enter your response here > ";
    int user_input;
    cin >> user_input;
    cout << "\n";

    // Here we saying this function to return value to some other function
    return user_input;
}

int main() {
    function_for_menu();

    // Here we are asking this function to retrieve the value and assign it to
    // 'int' user_input_returning_from_above
    int user_input_returning_from_above = function_for_user_input();
    // No need to enter 'function_for_user_input' because it has already been
    // added while assigning the value above

    switch (user_input_returning_from_above) {
        case 1:
            cout << "Searching...\n";
            break;
        case 2:
            cout << "Viewing record...\n";
            break;
        case 3:
            cout << "Quitting...\n";
            break;
        default:
            cout << "Invalid input. Please try again.\n";
    }

    return 0;
}
