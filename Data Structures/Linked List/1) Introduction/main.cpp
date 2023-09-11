#include "LL.cpp"
#include "LL.h"

int main() {
    LL A;

    A.insert(10);
    A.insert(20);
    A.insert(30);

    std::cout << A.size() << "\n";

    A.print();

    A.insert(3, 100);
    A.print();

    A.erase(1);
    A.print();

    return 0;
}