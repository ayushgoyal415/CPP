#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string name = "Ayush";
    int age = 25;

    stringstream info;

    info << "Name : " << name << ", Age : " << age;

    cout << info.str() << "\n";

    return 0;
}