#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool even(int x) { return x % 2 == 0; }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /*These algorithms accept 3 arguments :
        Arg 1 : Iterater to starting position (e.g. vector.begin() or arr)
        Arg 2 : Iterator to ending position (e.g. vector.end() or arr + n)
        Arg 3 : Address to the function to use while scanning algorithm
    */

    vector<int> A = {2, 4, 6, 8, 10};
    vector<int> B = {1, 4, 6, 8, 10};
    vector<int> C = {1, 5, 7, 9, 11};

    // Using algorithm by passing a regular function
    cout << "Passing a regular function and vector A :\n";
    cout << all_of(A.begin(), A.end(), even) << " ";
    cout << any_of(A.begin(), A.end(), even) << " ";
    cout << none_of(A.begin(), A.end(), even);

    // Using function pointer to a regular function
    cout << "\nPassing a function pointer and vector B :\n";
    auto fp = even;
    cout << all_of(B.begin(), B.end(), fp) << " ";
    cout << any_of(B.begin(), B.end(), fp) << " ";
    cout << none_of(B.begin(), B.end(), fp);

    // Using alogrithm by passing a lambda function
    cout << "\nPassing a lambda function and vector C :\n";
    auto lam_even = [](int x) { return x % 2 == 0; };
    cout << all_of(C.begin(), C.end(), lam_even) << " ";
    cout << any_of(C.begin(), C.end(), lam_even) << " ";
    cout << none_of(C.begin(), C.end(), lam_even);

    return 0;
}