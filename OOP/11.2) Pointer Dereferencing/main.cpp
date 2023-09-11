#include <iostream>
using namespace std;

class Cat {
   private:
    string name;

   public:
    Cat(){};
    Cat(string name) : name(name){};
    void set_info(string name) { this->name = name; };
    void get_info() { cout << "Name : " << name << endl; };
    ~Cat(){};
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Cat* p = new Cat[5];

    // When a pointer is not dereferneced, we can call methods by using (->)
    p->set_info("One");

    // When a pointer is already dereferced eg. p[i] then we can call methods by
    // using (.)
    p[1].set_info("Two");

    // Below written scenario 1 and 2 are the same thing
    /*Scenario 1*/ p->get_info();
    /*Scenario 2*/ p[0].get_info();

    p[1].get_info();

    delete p;

    return 0;
}