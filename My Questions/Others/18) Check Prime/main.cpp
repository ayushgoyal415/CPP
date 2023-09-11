#include <iostream>

#include "math.h"
using namespace std;

bool check_prime(int n) {
    for (int i = 2; i <= pow(n, 0.5); i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int n;
    cout << "Enter a number to check : ";
    cin >> n;

    if (n < 2) {
        if (n < 0) cout << "Negative numbers are never prime";
        if (n == 0 || n == 1) cout << "Not prime/composite";
        return 0;
    }

    check_prime(n) ? cout << "Prime" : cout << "Composite";

    return 0;
}