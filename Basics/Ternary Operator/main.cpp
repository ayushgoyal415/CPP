#include <iostream>
using namespace std;

int main() {
    int score = 95;
    // This how the code written below is read ->
    // Ok. You want to assign value to bool topper.
    // Let's see. Is it true that your score > 90
    // if true then bool is set to true otherwise its false

    bool topper = score > 90 ? true : false;
    string prize = topper ? "First" : "Consolation";
    cout << prize << "\n";

    return 0;
}