#include <iostream>
using namespace std;

// Static vaiable is stored on the heap so its memory does not get deallocated
// when the function ends. Thus giving state to a function.

// Note : The example given below can be achieved using a global variable
// 'counter' also but global variable can be modified outside of a function
// while static variable defined inside a class cannot be modified without
// calling the function.

void count_fun() {
    static int counter = 0;
    cout << "Function executed : " << ++counter << " times\n";
}

int main() {
    for (int i = 0; i < 10; i++) count_fun();

    return 0;
}