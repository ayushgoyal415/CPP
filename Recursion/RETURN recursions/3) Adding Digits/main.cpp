#include <iostream>
using namespace std;

int add_digits(int n) {
    if (n == 0) return 0;
    return (add_digits(n / 10) + n % 10);
}

int main() {
    cout << add_digits(1245);
    return 0;
}