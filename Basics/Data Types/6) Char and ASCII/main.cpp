#include <limits.h>

#include <iostream>
using namespace std;

int main() {
    char get_value_at_position_55 = 55;
    char get_value_at_position_64 = 64;

    char get_the_position_where_character_7_is_located = '7';
    char get_the_position_where_character_at_the_rate_is_located = '@';
    char get_the_position_where_character_a_is_located = 'a';
    char get_the_position_where_character_A_is_located = 'A';

    char character_g = 'g';
    char character_7 = '7';

    cout << "Understanding ASCII Table\n";
    cout << "-------------------------\n\n";
    cout << "ASCII is a chart that represents the position of all 256 "
            "different characters a byte can insert\n";
    cout << " - for e.g. the character used to denote number '7' is located at "
            "55th place in ASCII table.\n";
    cout << " - another e.g. the character used to denote symbol '@' is "
            "located at 64th place in ASCII table.\n\n";

    cout << "Understanding CHAR\n";
    cout << "------------------\n\n";
    cout << "1) Char can be used to find the character located a particular "
            "position in the ASCII table.\n";
    cout << " - for e.g. If we allocate char value to number 55, it will tell "
            "us the character located at position 55 in ASCII table, that is: "
         << get_value_at_position_55 << "\n";
    cout << " - another e.g. the character located at position 64 in ASCII "
            "Table is: "
         << get_value_at_position_64 << "\n\n";

    cout << "2) Char can also be used in the reverse fashion, that is, to find "
            "out the position of a particular character in ASCII table.\n";
    cout << " - for e.g. if allocate char value to character '7', it will tell "
            "us where is the character '7' located in ASCII table, that is: "
         << int(get_the_position_where_character_7_is_located) << "\n";
    cout << " - another e.g. the character '@' is located at position: "
         << int(get_the_position_where_character_at_the_rate_is_located)
         << "\n";
    cout << " - another e.g. the character 'a' is located at position: "
         << int(get_the_position_where_character_a_is_located) << "\n";
    cout << " - another e.g. the character 'A' is located at position: "
         << int(get_the_position_where_character_A_is_located) << "\n";
    cout << "   (Note: The positions for characters 'a' and 'A' are different "
            "as these are different symbols)\n\n";

    cout << "3) The Char value of a character is same as the character.\n";
    cout << " - for e.g. the char value for character 'g' is: " << character_g
         << "\n";
    cout << " - another e.g the char value for character '7' is: "
         << character_7 << "\n\n";

    cout << "4) Other aspects of 'char': \n";
    cout << " - Size of char: " << sizeof(char)
         << " (The size of char is 1 byte because char denotes the various "
            "characters stores in 1 byte)\n";
    cout << " - Maximum value of char: " << CHAR_MAX << "\n";
    cout << " - Minimum value of char: " << CHAR_MIN << "\n";
    cout << " - Maximum value of unsigned char: " << UCHAR_MAX << "\n";
    cout << " - Size of wchar_t: " << sizeof(wchar_t) << "\n";
    cout << " - Maximum value of wchar_t: " << WCHAR_MAX << "\n";
    cout << " - Minimum value of wchar_t: " << WCHAR_MIN
         << " (hebce wchar_t is unsigned)\n\n";

    cout << "Note: We can't put char values as alphabet letters, signed "
            "integers or integers outside of -128 and 127 or any other "
            "symbols.\n";
    cout << "This is because the char values represent the position in the "
            "ASCII table which is limited to 256 positions.\n";
    cout << "ASCII positions 0-127 include standard characters and positions "
            "128-256 include extended characters.\n";
    cout << "Thus the values can only be between integers 0 and 127 (for "
            "standard character positions) and between integers -1 and -128 "
            "(for extended character positions).\n\n";

    cout << "Note: While finding out positions for various characters, the "
            "char values should be inserted in commas so that the computer "
            "understands the values as characters and not numbers/letters. If "
            "we don't follow this rule: \n";
    cout << "1) Firstly, we can't assign letters as char values as they would "
            "be considered as invalid inputs as without commas char values "
            "would be considered as various position in ASCII table which can "
            "only be between 0 and 256.\n";
    cout << "2) Secondly, if we assign number for e.g. 7 as char value, "
            "although it would be valid input, but it won't give up correct "
            "position of character 7 when putting in 'int composite' command, "
            "instead it will just put in the number 7.\n\n";

    cout << "Note: We can't put char values as character with multiple "
            "symbols.\n";
    cout << "This is because a particular position in ASCII table denote a "
            "single character not a group of characters.\n";
    cout << "for e.g. we can write as: char example_character = 'go'. This is "
            "invalid input.\n\n";

    return 0;
}
