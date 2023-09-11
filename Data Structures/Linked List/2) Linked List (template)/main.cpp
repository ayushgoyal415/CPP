#include "LL.h"

int main() {
    LL<std::string> A;

    A.push_back("10");
    A.push_back("20");
    A.push_back("30");

    std::cout << A.size() << "\n";

    A.print();

    A.insert(3, "100");
    A.print();

    A.erase(1);
    A.print();


    A.print();

    return 0;
}