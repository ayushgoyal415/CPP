#include <iostream>
#include <iomanip>
#include <limits.h>

using namespace std;

int main (){
	
	cout << "Welcome to Mathematics Quiz!!" <<endl <<endl;
	
	
	cout << "Choose the lesson you want to practice and type below:" <<endl;
	cout << "1) Addition" <<endl;
	cout << "2) Subtraction" <<endl;
	cout << "3) Multiplication" <<endl;
	cout << "4) Division" <<endl <<endl;
	
	
	cout << "Type your response here and hit 'Enter' >> " <<flush;
	
	int function_input;
	cin >> function_input;
	cout <<endl <<endl;
	
	
	bool choose_addition = (function_input == 1);
	bool choose_subtraction = (function_input == 2);
	bool choose_multiplication = (function_input == 3);
	bool choose_division = (function_input == 4);
	
	
	if (choose_addition) {
		cout << "=========================" <<endl;
		cout << "Welcome to addition wizard" <<endl;
		cout << "=========================" <<endl;
	}
	
	else if (choose_subtraction) {
		cout << "============================" <<endl;
		cout << "Welcome to subtraction wizard" <<endl;
		cout << "============================" <<endl;
	}
	
	else if (choose_multiplication) {
		cout << "===============================" <<endl;
		cout << "Welcome to multiplication wizard" <<endl;
		cout << "===============================" <<endl;
	}
	
	else if (choose_division) {
		cout << "=========================" <<endl;
		cout << "Welcome to division wizard" <<endl;
		cout << "=========================" <<endl;
	}
	
	else {
		cout << "Invalid Input." <<endl;
		return 0;
	}
	
	
	cout << " " << endl;
	
	
	cout << "1) Type in your first value and hit 'Enter' >> " <<flush;
	
	long long int value1;
	cin >> value1;
	cout <<endl;
	
	
	
	cout << "2) Type in your second value and hit 'Enter' >> " <<flush;
	
	long long int value2;
	cin >> value2;
	cout <<endl;
	
	
	long long int answer_input;
	
	long long int total_answer;
	
	if (choose_addition) {
		total_answer = (value1 + value2);
		}
	else if (choose_subtraction) {
			total_answer = (value1 - value2);
		}
	else if (choose_multiplication) {
			total_answer = (value1 * value2);
		}
	else if (choose_division) {
			total_answer = (value1 / value2);
		}
	
	
	do {
		
		cout << "## Type in your answer here and hit 'Enter' >> " <<flush;

		cin >> answer_input;
		cout <<endl <<endl;
		
		if (answer_input != total_answer) { 
		cout << "You answered incorrectly. Please try again." <<endl <<endl;
		}
		
	} while ((answer_input != total_answer));
	
	cout << "Well done. You answered correctly." <<endl;

	
	return 0;
}
