#include <iomanip>  //Allows fixed and scientific inputs. //Allows set precision command.
#include <iostream>
using namespace std;

int main() {
    float f_value = 76.4;

    cout << "Float is int in which we can put decimal places.\n\n";
    cout << "Size of float: " << sizeof(float) << "\n\n";

    cout << "Fixed float and scientific float types (In order to put in these "
            "commands, we need to include iomanip)\n";
    cout << "--------------------------------------\n\n";

    cout << "Scientific float\n";
    cout << "----------------\n";
    cout << "1) Scientific float value is a scientific way of putting in float "
            "values ,that is, in the form of raised powers of 10.\n";
    cout << "2) e.g. Scientific float value for float value 76.4 is : "
         << scientific << f_value << "\n\n";

    cout << "Fixed Float\n";
    cout << "-----------\n";
    cout << "1) Fixed float value is a non scientific way of putting in float "
            "values.\n";
    cout << "2) e.g. Fixed float value for float value 76.4 come out to be: "
         << fixed << f_value << "\n";
    cout << "3) As you can see , both scientific & fixed floats are not very "
            "reliable after 7 decimal places.\n\n";

    cout << "Increasing the 'cout' output using set precision command (Note : "
            "this command input needs iomanip file)\n";
    cout << "--------------------------------------------------------\n";
    cout << "Q: There is one obvious question from previous result that why "
            "doesn't float just keep on giving nonsense values after a total "
            "of 8 digits?\n";
    cout << "Ans: This is because we entered the command for fixed float under "
            "command 'cout' which generally would limit the size of a numeric "
            "to 8-9 digits.\n\n";
    cout << "But don't worry there is solution to it. We can allow 'cout' to "
            "increase this limit by putting in 'set precision command'\n";
    cout << "e.g. Set precision value (20) for float value 76.4 comes out to "
            "be: "
         << setprecision(20) << fixed << f_value << "\n";
    cout << "Note that although 'set precision' command increases the total "
            "digits, it does not makes fixed float command reliable beyond 7 "
            "digits.\n";
    cout << "Scientific float value is also not reliable beyond 7 digits. For "
            "e.g. the scientific float value for 76.4 with 'set precision "
            "command (20)' comes out to be: "
         << setprecision(20) << scientific << f_value << "\n\n";

    cout << "In order to increase the reliability of decimal figures beyond "
            "total of 7 digits, we can use other command e.g. 'double' which "
            "has reliability of up to about 15 digits.\n";

    return 0;
}
