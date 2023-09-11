#include <functional>  // Header file functional is added
#include <iostream>
using namespace std;

int sum(int a, int b) { return a + b; }

int main() {
    // Syntax : function <return type (arg types)> identifier
    function<int(int, int)> fp = sum;

    cout << fp(5, 2) << endl;

    return 0;
}