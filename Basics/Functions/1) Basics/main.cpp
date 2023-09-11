#include <iostream>
using namespace std;

void function_for_menu() {
    cout << "Program features : \n";
    cout << "1) Search\n";
    cout << "2) View record\n";
    cout << "3) Quit\n\n";
}

void function_for_user_input_and_processing() {
    cout << "Enter your response here > ";
    int user_input;
    cin >> user_input;
    cout << "\n";

    switch (user_input) {
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
    function_for_user_input_and_processing();
    return 0;
}
