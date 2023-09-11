#include <bits/stdc++.h>
using namespace std;

void compare_words(string comp_word) {
    const string org_word = "Fog";

    cout << org_word.compare(comp_word) << " : ";

    if (org_word.compare(comp_word) == 0)
        cout << "The words are same\n";
    if (org_word.compare(comp_word) > 0)
        cout << quoted(org_word) << " is lexographically bigger than " << quoted(comp_word) << "\n";
    if (org_word.compare(comp_word) < 0)
        cout << quoted(org_word) << " is lexographically smaller than " << quoted(comp_word) << "\n";
}

void compare_multiple_words(string comp_word) {
    const string org_word = "Fog Lamp";

    cout << org_word.compare(comp_word) << " : ";

    if (org_word.compare(comp_word) == 0)
        cout << "The words are same\n";
    if (org_word.compare(comp_word) > 0)
        cout << quoted(org_word) << " is lexographically bigger than " << quoted(comp_word) << "\n";
    if (org_word.compare(comp_word) < 0)
        cout << quoted(org_word) << " is lexographically smaller than " << quoted(comp_word) << "\n";
}

int main() {

    //-------------------------------------------------------------------------------
    // Comparing two strings (using .compare())
    //-------------------------------------------------------------------------------
    // Find the first position from left where characters vary in the two strings ->
    // Compare on ASCII table (numbers(0<9) < uppercase(A<Z) < lowercase(a<z)) ->
    // Compare sizes of the two strings
    //-------------------------------------------------------------------------------

    //-------------------------------------------------------------------------------
    // Comparing words with same size and trait
    // compare_words("Fog"); //(output = 0)
    //-------------------------------------------------------------------------------

    //-------------------------------------------------------------------------------
    // Comparing words of same size but different trait (at only one position)
    // compare_words("Dog"); // Comparing with a word which has lexographically smaller letter at first position (output = 1)
    // compare_words("Log"); // Comparing with a word which has lexographically larger letter at first position (output = -1)
    // compare_words("Fig"); // Comparing with a word which has lexographically smaller letter at any position (output = 1)
    // compare_words("For"); // Comparing with a word which has lexographically larger letter at any position (output = -1)
    // compare_words("FOg"); // Comparing with a word which has same letters but with an extra upper case (output = 1)
    // compare_words("fog"); // Comparing with a word which has same letters but with an extra lower case (output = -1)
    //-------------------------------------------------------------------------------

    //-------------------------------------------------------------------------------
    // Comparing words of same size but different traits (at multiple positions)
    // compare_words("Die"); // Comparing with a word which has lexographically smaller letters at all positions (output = 1)
    // compare_words("Lux"); // Comparing with a word which has lexographically larger letters at all positions (output = -1)
    // compare_words("Don"); // Comparing with a word which has lexographically smaller letter at a smaller position and lexographically larger letter at a larger position (output = 1)
    // compare_words("Goa"); // Comparing with a word which has lexographically larger letter at a smaller position and lexographically smaller letter at a larger position (output = -1)
    // compare_words("Duo"); // Comparing with a word which has lexographically smaller letter at a smaller position and lexographically larger letters at multiple positions thereafter (output = 1)
    // compare_words("Lab"); // Comparing with a word which has lexographically larger letter at a smaller position and lexographically smaller letters at multiple positions thereafter (output = -1)
    // compare_words("fOG"); // Comparing with a word which has same letters but with an extra lower case at smaller position and multiple extra upper cases therafter (output = -1)
    // compare_words("dog"); // Comparing with a word which has same letters but with a lower case and a lexographically smaller letter at first position (output = -1)
    //-------------------------------------------------------------------------------

    //-------------------------------------------------------------------------------
    // Comparing words of different sizes
    // compare_words("Fo");   // Comparing with a smaller word which has same characters as original word (output = 1)
    // compare_words("Fogg"); // Comparing with a larger word which has same characters as original word (output = -1)
    // compare_words("Dogg"); // Comparing with a Larger word which has lexographically smaller letter (output = 1)
    // compare_words("Jogg"); // Comparing with a Larger word which has lexographically larger letter (output = -1)
    // compare_words("Do");   // Comparing with a smaller word which has lexographically smaller letter (output = 1)
    // compare_words("Go");   // Comparing with a smaller word which has lexographically larger letter (output = -1)
    //-------------------------------------------------------------------------------

    //-------------------------------------------------------------------------------
    // Comparing strings with different number of words
    // compare_multiple_words("Fog");
    // compare_multiple_words("Fog Lamp Car");
    // compare_multiple_words("Dog");
    // compare_multiple_words("Dog Lamp Car");
    // compare_multiple_words("Log");
    // compare_multiple_words("Log Lamp Car");
    //-------------------------------------------------------------------------------

    return 0;
}