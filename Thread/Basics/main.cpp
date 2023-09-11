#include <iostream>
#include <thread>
using namespace std;

struct Timer {
    chrono::time_point<chrono::high_resolution_clock> st, ed;
    chrono::duration<float> dr;

    Timer() { st = chrono::high_resolution_clock::now(); }
    ~Timer() {
        ed = chrono::high_resolution_clock::now();
        dr = ed - st;
        float t = dr.count();
        string unit = (t < 1) ? " ms" : " s";
        t = (t < 1) ? (t * 1000.00) : (t);
        cout << "\nTimer took : " << t << unit << "\n";
    }
};

typedef unsigned long long ull;
ull odd_sum = 0, even_sum = 0;

void even(ull n) {
    for (ull i = 0; i <= n; i++)
        if ((i & 1) == 0) even_sum += i;
}
void odd(ull n) {
    for (ull i = 0; i <= n; i++)
        if ((i & 1) == 1) odd_sum += i;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Timer timer;

    even(1900000000);
    odd(1900000000);

    // thread t1(even, 1900000000);
    // thread t2(odd, 1900000000);

    // t1.join();
    // t2.join();

    cout << "Even Sum : " << even_sum << "\n";
    cout << "Odd Sum  : " << odd_sum << "\n";

    return 0;
}