#include <limits.h>  //This file allows declaration of maximum and minimum commands.

#include <iostream>
using namespace std;

int main() {
    cout << "### Byte Sizes for various integers ###\n";
    cout << "--------------------------------------\n\n";

    cout << "Byte-size for Short Int				: "
         << sizeof(short int) << "\n";
    cout << "Byte-size for Int				: " << sizeof(int)
         << "\n";
    cout << "Byte-size for Long Int				: "
         << sizeof(long int) << "\n";
    cout << "Byte-size for Long Long Int			: "
         << sizeof(long long int) << "\n\n\n";

    cout << "### Maximum values for signed integers ###\n";
    cout << "------------------------------------------\n\n";

    cout << "Maximum value for Short Int			: " << SHRT_MAX
         << "\n";
    cout << "Maximum value for Int				: " << INT_MAX
         << "\n";
    cout << "Maximum value for Long Int			: " << LONG_MAX << "\n";
    cout << "Maximum value for Long Long Int			: " << LLONG_MAX
         << "\n\n\n";

    cout << "### Minimum values for signed integers ###\n";
    cout << "------------------------------------------\n\n";

    cout << "Minimum value for Short Int			: " << SHRT_MIN
         << "\n";
    cout << "Minimum value for Int				: " << INT_MIN
         << "\n";
    cout << "Minimum value for Long Int			: " << LONG_MIN << "\n";
    cout << "Minimum value for Long Long Int			: " << LLONG_MIN
         << "\n\n\n";

    cout << "### Maximum values for unsigned integers ###\n";

    // The values of unsigned integers are double those of signed because they
    // don't need to allocate memory for negative values.

    cout << "--------------------------------------------\n\n";

    cout << "Maximum value for Unsigned Short Int		: " << USHRT_MAX
         << "\n";
    cout << "Maximum value for Unsigned Int			: " << UINT_MAX
         << "\n";
    cout << "Maximum value for Unsigned Long Int		: " << ULONG_MAX
         << "\n";
    cout << "Maximum value for Unsigned Long Long Int	: " << ULLONG_MAX
         << "\n";

    return 0;
}
