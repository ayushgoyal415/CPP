#include <iostream>
using namespace std;

int main() {
    int my_age = 25;
    cout << "Hey computer. I am Ayush, a " << my_age << " year old boy."
         << endl;
    cout << " " << endl;

    cout << "I have one riddle for you: If my father is twice my age plus 1, "
            "then what's his age?"
         << endl;
    int father_age = my_age * 2 + 1;
    cout << "Computer: " << father_age << endl;
    cout << " " << endl;

    cout << "Now if I tell you that it's my b'day today, what's my new age? "
         << endl;
    my_age = my_age + 1;
    cout << "Computer: " << my_age << "." << endl;
    cout << " " << endl;

    cout << "Alright, I bet that you won't be able to tell my father's age "
            "correctly now."
         << endl;
    cout << "Computer: I can. I am not that dumb. He is " << father_age << ". "
         << endl;
    cout << " " << endl;

    cout << "Ok. Now promise me that you will not change your answer if I ask "
            "you my father's age again."
         << endl;
    cout << "Computer: I won't. Your father's age will remain same, that is, "
         << father_age << ", unless you change the code." << endl;
    cout << " " << endl;
    father_age = my_age * 2 + 1;
    cout << "No I won't change the code, I will just repeat again that my "
            "father's age is twice my age plus 1. Tell me his age now."
         << endl;
    cout << "Computer: "
         << "It's umm.." << father_age << "." << endl;
    cout << " " << endl;

    cout << "See, you have changed your answer. Hence, its proved that you are "
            "a dumb machine."
         << endl;
    return 0;
}
