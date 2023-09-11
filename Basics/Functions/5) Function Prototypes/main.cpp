#include <iostream>
using namespace std;

void hello_cmd (); 		// By adding this void; we have declared that there is something known as hello_cmd, which is not located here. But compiler knows that it will find the required data somewhere else afterwards, just move on.

int main() {
	hello_cmd();	
	return 0;
}

void hello_cmd () {
	cout << "hello" <<endl;
}