#include <iostream>
#include <vector>
using namespace std;

int main() {

//	XOR of a number with itself is always zero
//	XOR of a number with zero is always equal to the number itself

//-----------------------------------------------------------------------------------------------------------------
//	Example Question : Find the only non repeating element in a vector containing all repeating elements
//-----------------------------------------------------------------------------------------------------------------
	vector <int> A {1, 1, 2, 2, 3, 3, 4, 5, 5};
	int x = 0;
	for (unsigned int i = 0; i < A.size(); i++) x ^= A[i];
	cout << x <<"\n";
	return 0;
}