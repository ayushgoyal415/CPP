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
	
	double function_input;
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
	
	double value1;
	cin >> value1;
	cout <<endl;
	
	
	
	cout << "2) Type in your second value and hit 'Enter' >> " <<flush;
	
	double value2;
	cin >> value2;
	cout <<endl;
	
	
	
	if (choose_addition) {
		cout << "3) Type in your answer here and hit 'Enter' >> " <<fixed <<setprecision(2) <<value1 << " + " << value2 << " = " <<flush;
	}
	else if (choose_subtraction){
		cout << "3) Type in your answer here and hit 'Enter' >> " <<fixed <<setprecision(2) <<value1 << " - " << value2 << " = " <<flush;
	}
	else if (choose_multiplication){
		cout << "3) Type in your answer here and hit 'Enter' >> " <<fixed <<setprecision(2) <<value1 << " x " << value2 << " = " <<flush;
	}
	else if (choose_division){
		cout << "3) Type in your answer here and hit 'Enter' >> " <<fixed <<setprecision(2) <<value1 << " / " << value2 << " = " <<flush;
	}
	
	
	
	double total_answer;
		
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
	
	
	
	double answer_input;
	cin >> answer_input;
	
	cout <<endl <<endl;
	
	
	double lower_end_float_precision = total_answer - 0.001;
	double higher_end_float_precision = total_answer + 0.001;
	
	if (answer_input == total_answer) {
		cout << "Well done. You answered correctly." <<endl;
	
	} else if (answer_input < total_answer && answer_input > lower_end_float_precision) {
		cout << "Well done. You answered correctly." <<endl;
	
	} else if (answer_input > total_answer && answer_input < higher_end_float_precision) {
		cout << "Well done. You answered correctly." <<endl;
	
	} else {
		cout << "You answered incorrectly. Please try again." <<endl;
	}
	
	return 0;
}
