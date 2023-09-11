#include <chrono>
#include <iostream>
#include <map>

using namespace std;

// Same as emplace but requires pos hint :
// Logarithmic in the size of the container in general, but amortized
// constant if the new element is inserted just before hint.

// Return value is only iterator (no bool)

// In this code we are going to see the time taken for each of the operations

const int OPERATIONS = 80000;

void emplace() {
    map<int, char> map;
    for (int i = 0; i < OPERATIONS; i++) map.emplace(i, 'a');
}

void emplace_hint() {
    map<int, char> map;
    auto it = map.begin();
    for (int i = 0; i < OPERATIONS; i++) {
        map.emplace_hint(it, i, 'b');
        it = map.end();
    }
}

void emplace_hint_wrong() {
    map<int, char> map;
    auto it = map.begin();
    for (int i = 0; i < OPERATIONS; i++) {
        map.emplace_hint(it, i, 'b');
        it = map.begin();
    }
}

void emplace_hint_closest() {
    map<int, char> map;
    auto it = map.begin();
    for (int i = 0; i < OPERATIONS; i++) it = map.emplace_hint(it, i, 'e');
}

// Using a function pointer to recieve different functions
void timeit(void (*fp)(), string s) {
    auto st = chrono::high_resolution_clock::now();
    fp();
    auto en = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> time = en - st;
    cout << time.count() << " ms for " << s << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    timeit(emplace, "plain emplace");
    timeit(emplace_hint, "emplace with right hint");
    timeit(emplace_hint_wrong, "emplace with wrong hint");
    timeit(emplace_hint_closest, "emplace with returned iterator");

    return 0;
}