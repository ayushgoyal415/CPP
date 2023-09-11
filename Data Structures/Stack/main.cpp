#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Constructors
    // Can't do this -> stack <int> A = {1,2,3,4,5};

    // Can't do this ->
    // vector <int> vec = {1,2,3,4,5};
    // stack<int> C(vec.begin(), vec.end());

    // Method 1 :
    stack<int> A;
    A.push(1), A.push(2), A.push(3), A.push(4), A.push(5);

    // Method 2 :
    stack<int> B(A);

    // Method 3:
    deque<int> deq = {10, 20, 30, 40, 50};
    stack<int> C(deq);

    cout << A.size() << ", " << B.size() << ", " << C.size() << "\n";

    // Other Methods

    B.pop();
    cout << A.top() << ", " << B.top() << "\n";
    if (!A.empty()) cout << "Not Empty\n";
    A.swap(B);
    cout << A.top() << ", " << B.top() << "\n";

    // Trick to print elements of a stack by popping elements one by one

    while (!A.empty()) {
        cout << A.top() << " ";
        A.pop();
    }
    
    return 0;
}