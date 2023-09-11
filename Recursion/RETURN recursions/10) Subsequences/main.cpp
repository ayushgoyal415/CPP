#include <iostream>
#include <vector>
using namespace std;

int substring(string s, vector<string> &A) {
    if (s.size() == 0) {
        A[0] == "";
        return 1;
    }

    int size_of_smaller_output = substring(s.substr(1), A);

    for (int i = 0; i < size_of_smaller_output; i++) 
        A[size_of_smaller_output + i] = s[0] + A[i];

    return 2 * size_of_smaller_output;
}

int main() {
    vector<string> A(100);
    int n = substring("ABC", A);
    for (int i = 0; i < n; i++) cout << A[i] << "\n";

    return 0;
}