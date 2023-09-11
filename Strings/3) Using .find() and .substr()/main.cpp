#include <iostream>
using namespace std;

void print_substring(string s, int n) {
    if (n == string::npos)
        cout << "String not found.\n";
    else
        cout << s.substr(n) << "\n";
}

int main() {
    string word = "My name is Ayush";

    // // Searching in forward direction (L -> R) from beginning
    // // (using .find(substring/char))
    // print_substring(word, word.find("M"));
    // print_substring(word, word.find("x"));
    // print_substring(word, word.find("name"));

    // // Searching in forward direction (L -> R) from position
    // // (pos = beginning + n)
    // print_substring(word, word.find("y", 1));
    // print_substring(word, word.find("y", 2));
    // print_substring(word, word.find("y", 13));

    // // Searching in backward direction (L <- R) from end
    // // (using .rfind(substring/char))
    // print_substring(word, word.rfind("s"));
    // print_substring(word, word.rfind("y"));
    // print_substring(word, word.rfind("is"));

    // // Searching in backward direction (L <- R) from position
    // // (pos = beginning + n)
    // print_substring(word, word.rfind("y", 0));
    // print_substring(word, word.rfind("y", 4));
    // print_substring(word, word.rfind("y", 19));

    // word = "aaaaaaadaaaadaaa";

    // // Searching in forward direction (L -> R) from beginning
    // //(using .find_first_not_of(substring/char))
    // print_substring(word, word.find_first_not_of("a"));

    // // Searching in backward direction (L <- R) from end
    // //(using .find_last_not_of(substring/char))
    // print_substring(word, word.find_last_not_of("a"));

    return 0;
}