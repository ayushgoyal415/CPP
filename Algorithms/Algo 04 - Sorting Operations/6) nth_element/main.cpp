#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print(auto s, auto &A) {
    cout << s;
    for (auto &i : A) cout << i << " ";
    cout << ", size : 11\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Rearranges the ds so that it correctly places the element at right
    // position if all of the ds was sorted
    // It will not sort the entire ds but just place the right element at
    // position n It does so by putting rearraning all the elements that are to
    // be placed before nth position and then putting the correct element at nth
    // position. So in the final ds all the elements before this final position
    // will be bucketed as if they would be in a sorted ds , its, just that they
    // are not sorted perfectly

    vector<int> A = {5, 3, 2, 8, 4, 6, 1, 10, 7, 9, 11};
    // Finding the median of a ds using nth_element
    // To find median we just need to find the element located at ds.size/2 if
    // the ds was sorted

    print("Original vector : ", A);
    nth_element(A.begin(), A.begin() + A.size() / 2, A.end());
    print("Vector after alg : ", A);

    cout << "The median is : " << A[A.size() / 2] << "\n";

    cout << "Note how the algorithm cleverly placed the smaller elements before nth position\n\n";

    return 0;
}