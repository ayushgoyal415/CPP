#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double d_value = 76.4;
    long double ld_value = 76.4;

    cout << "Double Value (Has reliability for up to 15 digits in a numerical "
            "with decimals)\n";
    cout << "------------\n";

    cout << "Double fixed and scientific values at 'set precision (20) are as "
            "follows: \n";
    cout << "Double fixed value @ precision (20): " << setprecision(20) << fixed
         << d_value << "\n";
    cout << "Double scientific value @ precision (20): " << setprecision(20)
         << scientific << d_value << "\n\n";

    cout << "Long Double (Has reliability for up to 15 digits in a numerical "
            "with decimals)\n";
    cout << "-----------\n";

    cout << "Long Double fixed and scientific values at 'set precision (20) "
            "are as follows: \n";
    cout << "Long Double fixed value @ precision (20): " << setprecision(20)
         << fixed << ld_value << "\n";
    cout << "Long Double scientific value @ precision (20): "
         << setprecision(20) << scientific << ld_value << "\n\n";

    cout << "SUMMARY\n";
    cout << "-------\n";

    cout << "Size of float: " << sizeof(float) << "\n";
    cout << "Size of long float: " << sizeof(long double)
         << " (I don't know why we can't use long float)\n";
    cout << "Size of double: " << sizeof(double) << "\n";
    cout << "Size of long double: " << sizeof(long double)
         << " (I don't know, although the size of long double is greater than "
            "double but reliability is same)\n";

    return 0;
}
