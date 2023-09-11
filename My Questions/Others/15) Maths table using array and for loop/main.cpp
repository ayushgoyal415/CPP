#include <iomanip>
#include <iostream>
#include <limits.h>

using namespace std;

int main () {
	
	int table_of;
	int start_at;
	int end_at;
	
	cout << "Construct table of: " <<flush;
	cin >> table_of;
	
	cout << endl <<endl << table_of << " x " <<flush;
	cin >> start_at;
	
	cout << "  ." <<endl << "  ." <<endl << "  ." <<endl << "  ." <<endl << "  ." <<endl << "  ." <<endl << "  ." <<endl << "  ." <<endl << "  ." <<endl << "  ." <<endl << "  ." <<endl;
	
	cout << table_of << " x " << flush;
	cin >> end_at;
	
	cout << endl << endl << "The table is here: " <<endl <<endl;
	
	int n = (end_at - start_at + 1);
	
	int array [n] = {};
	
	for (int i=0; i < n; i++, start_at++) {
			
		array[i] = {table_of * start_at};
		
		cout << table_of << " x " << (start_at) << " = " << array [i] <<endl;
	}
	
	
	
	return 0;
}
