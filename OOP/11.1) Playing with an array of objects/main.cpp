#include "Cat.h"

// Function that can return an array of cats
Cat *create_cats(int n) {
    Cat *pcats = new Cat[n];
    return pcats;
}
// Function that can rename an array of cats
void set_names(Cat A[], int n) {
    char ch = 'a';
    for (int i = 0; i < n; i++, ch++) A[i].set_name(ch);
}
// Function that can delete an array of cats
void delete_cats(Cat A[], int n) { delete[] A; }

int main() {
    int n = 26;

    Cat *pcats = create_cats(n);
    set_names(pcats, n);
    delete_cats(pcats, n);

    return 0;
}