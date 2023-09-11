#include <functional>
#include <iostream>
using namespace std;

int main() {
    int (*fp)(int, int) = [](int a, int b) { return a + b; };

    function<int(int, int)> fp2 = [](int a, int b) { return a + b; };

    cout << fp(5, 2) << endl;
    cout << fp2(5, 2) << endl;

    return 0;
}