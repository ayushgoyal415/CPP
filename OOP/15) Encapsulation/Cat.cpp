#include "Cat.h"

string Cat::get_name() { return name; }

string Cat::reverse_name() {
    int st = 0;
    int lt = name.size() - 1;
    string s = name;

    while (st < lt) {
        swap(s[st], s[lt]);
        st++, lt--;
    }
    return s;
}

string Cat::dup_reverse_name() { return reverse_name(); }