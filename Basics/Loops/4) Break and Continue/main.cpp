#include <iostream>
using namespace std;

int main() {
    cout << "1) Using Break:\n";
    cout << "===============\n";

    cout << "'Break' command breaks the loop and ends it instantly at desired "
            "location.\n";
    cout << "Type 1 and press Enter below to look how 'break' ends the loop "
            "suddenly.\n\n";

    cout << "2) Using Continue:\n";
    cout << "==================\n";

    cout << "'Continue' command just skips the code at desired location "
            "without affecting further loops.\n";
    cout << "Type 2 and press Enter below to look how 'continue' skips the "
            "statements stored in a loop.\n\n";

    cout << "Enter your response here: ";
    int user_input;
    cin >> user_input;

    if (user_input == 1) {
        cout << "\n\nBreak loop initiated...\n\n";
        cout << "See how loop will suddenly end at position 5, while loop was "
                "destined to end at 9.\n\n";

        for (int i = 0; i < 10; i++) {
            cout << "i is: " << i << "\n";
            if (i == 5) break;
            cout << "This is the value of i: " << i << "\n\n";
        }

        cout << "\nThe Program has ended abruptly.\n";
    }

    else if (user_input == 2) {
        cout << "\n\nContinue loop initiated...\n\n";
        cout << "See how loop will skip at position 5.\n\n";

        for (int i = 0; i < 10; i++) {
            cout << "i is: " << i << "\n";
            if (i == 5) continue;
            cout << "This is the value of i: " << i << "\n\n";
        }

        cout << "The stored statement in the loop is absent after 'continue' "
                "command at position 5.\n";
    }

    else
        cout << "Invalid input.\n";

    return 0;
}
