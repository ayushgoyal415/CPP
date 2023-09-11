#include <iostream>
using namespace std;

void manip1(int n) { n *= 10; }
void manip2(int* n) { *n *= 10; }
void manip3(int& n) { n *= 10; }
int manip4(int n) { return n * 10; }

int main() {
    int n = 4;

    manip1(n);
    cout << n << "\n";

    manip2(&n);
    cout << n << "\n";

    manip3(n);
    cout << n << "\n";

    n = manip4(n);
    cout << n << "\n";

    return 0;
}