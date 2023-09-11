#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char A[] = "apple";

    int n = sizeof(A);

    char* pcurr = &A[0];
    char* pl = (&A[n - 1]) - 1;  // -1 to exclude the nord terminator

    while (pcurr < pl) {
        char t = *pcurr;
        *pcurr = *pl;
        *pl = t;
        pcurr++, pl--;
    }
    cout << A << endl;

    return 0;
}