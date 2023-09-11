#include <iostream>
#include <iomanip>
#include <limits.h>

using namespace std;

int main(){
	
	cout << "Welcome to mathematics table constructor" <<endl;
	cout << "========================================" <<endl;
	
	cout << "Put in the value for which you want to construct the table here >> " <<flush;
	long long int table_of;
	cin >> table_of;
	cout << endl;
	
	cout << "Put in the value from which you want to start construction for the table of " << table_of << " : " << flush;
	long long int start_at;
	cin >> start_at;
	cout << endl;
	
	cout << "Put in the value where you want to end the construction for the table of " << table_of << " : " <<flush;
	long long int end_at;
	cin >> end_at;
	cout << endl;
	

	
	while (start_at <= end_at) {
		
		cout << table_of << " x " << start_at << " = " << flush;
		
		long long int total = table_of * start_at;
		cout << total << endl <<endl;
		
		start_at++;
		
		
	}
	
	cout << endl;
	cout << "Thanks for using the application. Have a nice day." <<endl;
	
	return 0;
}
