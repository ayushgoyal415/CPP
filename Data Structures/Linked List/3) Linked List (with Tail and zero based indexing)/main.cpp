#include "LL.h"
using namespace std;

int main() {
    try {
        LL<int> A;
        A.push_back(1);
        A.pop_front();
        A.print();
    } catch (...) {
        cout << "err" << '\n';
    }

    return 0;
}