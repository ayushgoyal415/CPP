#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Queue is FIFO
    // Pushes new elements to back of the container
    // Pops elements from the front of the container

    // (pop prev element) <- {a, b, c, d, e} <- (push new element)

    // Constructors (Same as stack)

    // Can't do this -> queue <int> A = {1,2,3,4,5};
    // Can't do this ->
    // vector <int> vec = {1,2,3,4,5};
    // queue<int> C(vec.begin(), vec.end());

    // Method 1 :
    queue<int> A;
    A.push(1), A.push(2), A.push(3), A.push(4), A.push(5);

    // Method 2 :
    queue<int> B(A);

    // Method 3:
    deque<int> deq = {10, 20, 30, 40, 50};
    queue<int> C(deq);

    cout << A.size() << ", " << B.size() << ", " << C.size() << "\n";

    // Other Methods

    B.pop();
    cout << A.front() << ", " << B.front() << "\n";
    cout << B.back() << ", " << C.back() << "\n";
    if (!A.empty()) cout << "Not Empty\n";
    A.swap(B);
    cout << A.front() << ", " << B.front() << "\n";

    // Trick to print elements of a stack by popping elements one by one

    while (!A.empty()) {
        cout << A.front() << " ";
        A.pop();
    }

    return 0;
}