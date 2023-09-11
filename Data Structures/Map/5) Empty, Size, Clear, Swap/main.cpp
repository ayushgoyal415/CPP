#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> A = {{"One", 1}, {"Two", 2}, {"Three", 3}};

    cout << boolalpha << A.empty() << ", Size : " << A.size() << '\n';
    A.clear();
    cout << boolalpha << A.empty() << ", Size : " << A.size() << '\n';

    cout << "Max Size : " << A.max_size() << '\n';

    // Swap function -> Exchanges the contents of the container with those of
    // other. Does not invoke any move, copy, or swap operations on individual
    // elements. All iters and references remain valid. The past-the-end iter is
    // invalidated. Implemented as A.swap(B)

    return 0;
}