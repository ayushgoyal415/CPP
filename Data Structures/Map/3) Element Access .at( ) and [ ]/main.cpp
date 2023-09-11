#include <iostream>
#include <map>
using namespace std;

void print(string s, map<string, int> &A) {
    cout << s;
    for (auto &i : A) cout << "(" << i.first << ", " << i.second << ") ";
    cout << "\n";
}

int main() {
    map<string, int> A{{"One", 1}, {"Two", 2}, {"Three", 3}};
    print("Original A : ", A);

    /*-------------------------------------------------------------------------
    Using .at(). If no matching key is found then it throws an exception
    It can only be used to access elements (it can't insert elements)
    -------------------------------------------------------------------------*/
    // A.at("One") = 5;
    // print("A after modifying : ", A);
    // ++A.at("One");  // Incrementing integer stored at key 'One'
    // print("A after incrementing : ", A);

    /*-------------------------------------------------------------------------
    Using []. If no matching key is found then it inserts a new key, value pair.
    If no value is supplied then it inserts default value (i.e. 0 or ""). If key
    is found then it acts same as .at() and helps in accessing
    -------------------------------------------------------------------------*/
    // cout << A["One"] << "\n";
    // A["One"] = 5;
    // A["Four"] = 4;  // This thing inserts key, value pair -> "Four", 4
    // A["Five"];      // This thing inserts key, value pair -> "Five", 0
    // print("A after using [] : ", A);

    /*-------------------------------------------------------------------------
    Interesting use of [] to count repetition of words in initializer list
    -------------------------------------------------------------------------*/
    // map<string, int> B;
    // auto il = {"this", "sentence", "is", "not", "a",   "sentence",
    //            "this", "sentence", "is", "a",   "hoax"};
    // for (const auto &i : il) {
    //     ++B[i];
    //     // If no key exist, key is inserted with value = 1 (i.e. ++0).
    //     // If key already exists then value stored is incremented by one
    // }
    // for (const auto &word : B) {
    //     cout << "Word : " << word.first << ", Count : " << word.second << "\n";
    // }

    return 0;
}