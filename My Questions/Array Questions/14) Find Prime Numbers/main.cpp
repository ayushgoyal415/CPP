#include <math.h>

#include <iostream>
#include <vector>
using namespace std;

void prime_numbers(int n) {
    // Take size of vector 1 greater because we need elements upto number n
    vector<int> A(n + 1);

    for (int i = 2; i <= (int)pow(n, 0.5); i++) {
        if (A[i] == 0) {
            for (int j = i * i; j <= n; j += i) {
                A[j] = 1;
            }
        }
    }

    for (int i = 2; i < A.size(); i++)
        if (A[i] == 0) cout << i << " ";
}

int main() {
    int n;
    cin >> n;

    prime_numbers(n);

    return 0;
}