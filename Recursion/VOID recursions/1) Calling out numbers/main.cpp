#include <iostream>
using namespace std;

void print_numbers(int n) {
    if (n == 0) return;

    // Prints numbers in descending order
    // cout << "This is number " << n << "\n";

    print_numbers(n - 1);

    // Prints numbers in ascending order
    cout << "This is number " << n << "\n";
}

int main() {
    print_numbers(10);
    return 0;
}