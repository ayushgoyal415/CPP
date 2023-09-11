#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    //-------------------------------------------------------------------------------------------------------------------
    // Finding size of string (using .size() or .length())
    //-------------------------------------------------------------------------------------------------------------------
    // string word;
    // cin >> word;
    // for (int i = 0; i < word.size(); i++) {
    //     for (int j = 0; j <= i; j++) {
    //         cout << word[j] << " ";
    //     }
    //     cout << "\n";
    // }

    //-------------------------------------------------------------------------------------------------------------------
    // Resizing a string (using .resize())
    //-------------------------------------------------------------------------------------------------------------------
    // string word = "hello";
    // cout << word << "\n";
    // word.resize(7);
    // cout << word << "\n";
    // word.resize(4);
    // cout << word << "\n";
    // word.resize(7, 'O');
    // cout << word << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Declaring a string with multiple words
    //-------------------------------------------------------------------------------------------------------------------
    // string word = "This is hello world program";
    // cout << word << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Adding words to a previously declared string (using += operator)
    //-------------------------------------------------------------------------------------------------------------------
    // string word = "Hello";
    // cout << word << "\n";
    // word += ". This is Ayush ";
    // cout << word << "\n";
    // word += "Goyal";
    // cout << word << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Declaring a string with multiple same characters
    //-------------------------------------------------------------------------------------------------------------------
    // string word(4, 'h');
    // // Note type the character in '' not " "
    // // You can type only 1 character and not whole word
    // cout << word << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Assigning new value to a string (i.e. by reinvoking constructor)
    //-------------------------------------------------------------------------------------------------------------------
    // string word(4, 'h');
    // cout << word << "\n";
    // word.assign(5, 'o');
    // cout << word << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Swapping values between two strings (i.e. by reinvoking constructor)
    //-------------------------------------------------------------------------------------------------------------------
    // string word1 = "Apple", word2 = "Mango";
    // cout << word1 << " " << word2 << "\n";
    // word1.swap(word2);
    // cout << word1 << " " << word2 << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Assigning new string a substring from a previous string(s)
    //-------------------------------------------------------------------------------------------------------------------
    // string word = "Appear", word1, word2, word3, word4, word5;

    // word1.assign(word.begin(), word.end());
    // cout << word1 << "\n";

    // word2.assign(word, 1, 2);
    // cout << word2 << "\n";

    // word3.assign(word1 + word2);
    // cout << word3 << "\n";

    // word4.assign("hello", 4);
    // cout << word4 << "\n";

    // for (int i = 1; i <= word.size(); i++) {
    //     word5.assign(word, 0, i);
    //     cout << word5 << "\n";
    // }

    //-------------------------------------------------------------------------------------------------------------------
    // Calling out quoted string
    //-------------------------------------------------------------------------------------------------------------------
    // string word = "hello";
    // cout << quoted(word) << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Accesing string elements (using .at())
    //-------------------------------------------------------------------------------------------------------------------
    // // .at() command catches exception (out of bound)
    // string word = "Grow";
    // cout << word << "\n";
    // cout << word.at(1) << "\n";
    // word.at(1) = 'l';  // Use '' instead of " "
    // cout << word << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Accesing string elements (using operator [])
    //-------------------------------------------------------------------------------------------------------------------
    // string word = "Grow";
    // cout << word << "\n";
    // cout << word[1] << "\n";  // []  can go out of bound
    // word[1] = 'l';            // Use '' instead of " "
    // cout << word << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Accesing string elements (using char pointer)
    //-------------------------------------------------------------------------------------------------------------------
    // string word = "God";
    // char *p = &word[0];
    // cout << word << "\n";
    // cout << p[1] << "\n";  // char pointer  can go out of bound

    // for (int i = word.size() - 1; i >= 0; i--) cout << p[i];

    //-------------------------------------------------------------------------------------------------------------------
    // Inputting a string with a single or multiple words
    //-------------------------------------------------------------------------------------------------------------------
    // Single word input
    // string word;
    // cin >> word;
    // cout << word << "\n";

    // // Multiple words input (using getline function)
    // string word;
    // getline(cin, word);
    // cout << word << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Connencting/Calling two strings
    //-------------------------------------------------------------------------------------------------------------------
    // // Connecting by changing value
    // // Can also use the command (word = word + word_to_connect)
    // string word1, word2;
    // cin >> word1 >> word2;
    // word1.append(word2);
    // cout << "Word 1 : " << word1 << "\n";
    // cout << "Word 2 : " << word2 << "\n";

    // // Calling out two strings as if they are connected but without
    // // changing actual values stored in them
    // string word1, word2;
    // cin >> word1 >> word2;
    // cout << "Word 1 + Word 2 : " << word1 + word2 << "\n";

    // // Can also use this instead :
    // cout << word1 << word2 << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Clearing a string (using .clear())
    //-------------------------------------------------------------------------------------------------------------------
    // string word1, word2;
    // cin >> word1 >> word2;
    // cout << word1 << word2 << "\n";

    // word1.clear();

    // cout << word1 << word2 << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Checking if a string is empty (using .empty())
    //-------------------------------------------------------------------------------------------------------------------
    // string word = "hello";
    // cout << word.empty() << "\n";  // Empty is a boolian variable
    // word.clear();
    // cout << word.empty() << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Inserting and erasing (using (.push_back() and .pop_back())
    //-------------------------------------------------------------------------------------------------------------------
    // string word = "Hey there";
    // cout << word << "\n";

    // word.push_back('!');  // Use '' instead of " "
    // cout << word << "\n";

    // word.pop_back();
    // cout << word << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Finding index of a substring (using .find())
    //-------------------------------------------------------------------------------------------------------------------
    // string word = "Pneumonia";
    // cout << word.find("on") << "\n";
    // // Returns the starting index of the substring found
    // // Note that find function is not bound. It may go outside the string
    // // In this case it will be equal to string::npos

    //-------------------------------------------------------------------------------------------------------------------
    // Erasing substring (using .erase())
    //-------------------------------------------------------------------------------------------------------------------
    // string word = "Great Window. Well Done!";
    // cout << word << "\n";

    // // Put (index from where erasing should start, no. of elements to erase)
    // word.erase(7, 3);
    // cout << word << "\n";

    // word.erase(word.find("Wow"), 4);
    // cout << word << "\n";

    // word.erase(word.find(" "));
    // cout << word << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Inserting substring (using .insert())
    //-------------------------------------------------------------------------------------------------------------------
    // string word = "NONSENSE", word_insert = "totally ";
    // cout << word << "\n";

    // word.insert(0, "it's ");
    // cout << word << "\n";

    // word.insert(word.size(), 4, 'e');
    // cout << word << "\n";

    // word.insert(word.find("NON") + 1, 4, 'o');
    // cout << word << "\n";

    // word.insert(word.find("N"), word_insert);
    // cout << word << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Adding substring to end (using .append())
    //-------------------------------------------------------------------------------------------------------------------
    // string word = "TOTALLY", word_append = "nonsense";
    // cout << word << "\n";

    // // You can give multiple append commands
    // word.append(word_append).append(4, 'e').append(word, 0, 5);

    // cout << word << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Extracting substring from a string (using .substr())
    //-------------------------------------------------------------------------------------------------------------------
    // string word = "0123456789abcdefghij";

    // // Picking all elements starting from index 10
    // string sub1 = word.substr(10);
    // cout << sub1 << "\n";

    // // (n1, n2) Starting from(index = n1), picking n2 elements
    // string sub2 = word.substr(6, 3);
    // cout << sub2 << "\n";

    // string sub3 = word.substr(word.find('d'), 4);
    // cout << sub3 << "\n";

    // // If (n1 is <= size of string) but (n1 + n2 > size) then it resets n2
    // // automatically so that now (n1 + n2 = size)
    // string sub4 = word.substr(5, 100);
    // cout << sub4 << "\n";

    // // Don't set (n1 > size)
    // // It will cause the app to shut down spontaneously and show runtime
    // error

    //-------------------------------------------------------------------------------------------------------------------
    // Replacing substring from a string (using .replace())
    //-------------------------------------------------------------------------------------------------------------------
    // string word = "The quick brown fox jumps over a lazy dog.";
    // cout << word << "\n";

    // word.replace(10, 5, "red");
    // cout << word << "\n";

    // word.replace(word.find("lazy"), 4, "quick");
    // cout << word << "\n";

    // word.replace(word.find("g"), 1, "ggy");
    // cout << word << "\n";

    // word.replace(word.find('c'), 1, 4, 'c');
    // cout << word << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Copying a substring from a string to another char array (using .copy())
    //-------------------------------------------------------------------------------------------------------------------
    // string word = "The quick brown fox jumps over a lazy dog.";
    // char A[100] = {};

    // // Parameters = (destination char array, number of elements to pick,
    // first
    // // character to include)
    // word.copy(A, 3, 16);
    // cout << A << "\n";

    // word.copy(A, 3, word.find("dog"));
    // cout << A << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Converting a numeric string to signed integer (using stoi())
    //-------------------------------------------------------------------------------------------------------------------
    // string num = "786";
    // // stoul (converts to unsigned int) and stof(converts to float)
    // int n = stoi(num);
    // cout << n + 2 << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Converting an interger/float to string (using to_string())
    //-------------------------------------------------------------------------------------------------------------------
    // int n1 = 786;
    // int n2 = 2;
    // cout << n1 + n2 << "\n";

    // string num1 = to_string(n1);
    // string num2 = to_string(n2);
    // cout << num1 + num2 << "\n";

    //-------------------------------------------------------------------------------------------------------------------
    // Sorting a string
    //-------------------------------------------------------------------------------------------------------------------
    // string word = "njcncvknsdlvsdnalvzd";
    // sort(word.begin(), word.end());
    // cout << word << "\n";

    return 0;
}