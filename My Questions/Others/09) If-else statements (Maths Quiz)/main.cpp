#include <iostream>
using namespace std;
int main (){

	cout << "Type in value 1 and press 'Enter': " <<flush;
	int value_1;
	cin >> value_1;

	cout << "Type in value 2 and press Enter: " <<flush;
	int value_2;
	cin >> value_2;

	cout << "Add these values, type your answer and then press 'Enter': " << flush;
	int value_3;
	cin >> value_3;

	int total = value_1 + value_2;

	if (total == value_3) {
		cout << "Amazing. Correct answer." <<endl;
	}
	else if (total > value_3){
		cout << "Wrong answer. Your answer is less than the right answer. Please try again." <<endl;
		cout << " " <<endl;
	}

	else if (total < value_3) {
		cout << "Wrong answer. Your answer is greater than the right answer. Please try again." <<endl;
	}


	return 0;
}
