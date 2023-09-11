#include <iostream>
#include <sstream>
using namespace std;

class Cat {
   private:
    int age = -1;
    string name = "";

   public:
    // Declaring two functions with same name that differ in arguments
    void set_info(string name) { this->name = name; };
    void set_info(string name, int age) {
        this->name = name;
        this->age = age;
    };
    void get_info() { cout << "Name : " << name << ", Age : " << age << '\n'; };

    // Cannot make two functions with same name that differ only in return type
    // For eg: We can't make a new function named get_info that returns info
    // string get_info() {
    //     stringstream s;
    //     s << "Name : " << name << ", Age : " << age;
    //     return s.str();
    // };
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Cat cat1;
    cat1.get_info();

    // Calling the functions with same name but different arguments
    cat1.set_info("Bob");
    cat1.get_info();

    cat1.set_info("Bob", 12);
    cat1.get_info();

    return 0;
}