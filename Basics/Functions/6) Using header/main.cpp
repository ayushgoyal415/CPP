#include <iostream>
using namespace std;
#include "hello_header.h"

// Header files are retrieved by typing file name in " ". This #include is
// written below namespace std because this file contains cout command which is
// defined under namespace std.

int main() {
    hello();
    return 0;
}
