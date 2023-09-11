#include <iostream>
using namespace std;

int add_numbers(int n) {
    if (n == 0) return 0;
    return (add_numbers(n - 1) + n);
}

int main() {
    cout << add_numbers(5);
    return 0;
}