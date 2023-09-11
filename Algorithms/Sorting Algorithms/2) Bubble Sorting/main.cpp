#include <iostream>
#include <vector>
using namespace std;

vector<int> get_vec() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    return A;
}
void print(vector<int> &A) {
    for (int i = 0; i < A.size(); i++) cout << A[i] << " ";
    cout << "\n";
}
/*

1) Based on the comcept of shifting the largest element to the end
2) We start by comparing the current element with the next element
3) If current element is bigger than the next element, we swap the elements
4) Now we shift our current element by one (no matter whether swapping was
performed at previous step or not)
4) Now we compare the new current element to its next element.
5) We keep on comparing until we reach the last element of array (0 to n - 1).
6) After first cycle, the largest number will reach to the end.
7) In the second cycle we iterate from (0 to n - 2). We don't have to compare
the current element to the last element of array as we know that it is the
largest element in the array.
8) In the third cycle we will iterate from (0 to n - 3) and so on.

- By shifting the largest number to the end we are constructing a sorted
subarray at the end. So at any moment, we are iterating only on the unsorted
array of size = Total array size - Sorted subarray size.

- Time Complexity if was not adaptive - O(N^2) in every case
- Can be made adaptive so that best time complexity is O(N) (as done in the code
below)
- Worst case time Complexity if was adaptive O(N^2)
- If in any given iteration, no swapping was done then it means that the array
was completely sorted during that iteration

*/
void bubble_sort(vector<int> &A) {
    int n = A.size();
    int c = n - 1;
    while (c >= 1) {
        bool swapped = false;
        for (int i = 0; i <= c; i++) {
            if (A[i] > A[i + 1]) {
                swap(A[i], A[i + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
        c--;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A = get_vec();

    bubble_sort(A);
    print(A);

    return 0;
}