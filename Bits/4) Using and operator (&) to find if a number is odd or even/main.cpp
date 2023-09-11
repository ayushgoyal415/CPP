#include <iostream>
using namespace std;

void even_odd(int n) {
    if ((n & 1) == 1)
        cout << "Odd";
    else
        cout << "Even";
}

int main() {
    int n;
    cin >> n;
    even_odd(n);

    return 0;
}
