#include <iostream>
using namespace std;

void function_for_menu() {
    cout << "Program features : \n";
    cout << "1) Search\n";
    cout << "2) View record\n";
    cout << "3) Quit\n\n";
}

int function_for_user_input() {
    cout << "Enter your response here > ";
    int user_input;
    cin >> user_input;
    cout << "\n";

    return user_input;
}

// Add int with any random name to declare a variable, i.e. to tell it to look
// for an int value from the parameter below.
void function_for_processing_input(int random_name) {
    switch (random_name) {
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
}

int main() {
    function_for_menu();

    // Retrieving value from 'function_for_user_input' and putting into the new
    // int: 'user_input_returning_from_actual_function'
    int user_input_returning_from_actual_function = function_for_user_input();

    // Executing the function 'function_for_processing_input' while passing the
    // variable 'user_input_returning_from_actual_function' from 'int main'
    // function to the processing function ie 'function_for_processing_input'.
    function_for_processing_input(user_input_returning_from_actual_function);

    return 0;
}
