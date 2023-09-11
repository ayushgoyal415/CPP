#include <iostream>
#include <iomanip>
#include <limits.h>

using namespace std;

int main() {
	
	cout << "Table 1 : " << flush;
	long long int table_1;
	cin >> table_1;
	cout << "Start at : " << flush;
	long long int start_1;
	cin >> start_1;
	cout << "End at : " << flush;
	long long int end_1;
	cin >> end_1;
	cout << endl;

	cout << "Table 2 : " << flush;
	long long int table_2;
	cin >> table_2;
	cout << "Start at : " << flush;
	long long int start_2;
	cin >> start_2;
	cout << "End at : " << flush;
	long long int end_2;
	cin >> end_2;
	cout << endl << endl;
	

	long long int n = max((end_1 - start_1 + 1), (end_2 - start_2 + 1));
	long long int n1 = end_1 - start_1 + 1;
	long long int n2 = end_2 - start_2 + 1;
	

	long long int maths_table[2][n]{
		
		{},
		{}
		
	};
	

	for (int i=0; i<2; i++){

		if (i == 0){
			for (int j=0; j<n1; j++, start_1++){
				maths_table[i][j] = (table_1 * start_1);
			}
		}

		if (i == 1){
			for (int j=0; j<n2; j++, start_2++){
				maths_table[i][j] = (table_2 * start_2);
			}
		}
	}
	
	
	
	for (int i=0; i<2; i++){

		if (i == 0){
			for (int j=0; j<n1; j++){
				cout << maths_table[i][j] << ".." <<flush;
			}
			cout << endl;
		}

		if (i == 1){
			for (int j=0; j<n2; j++){
				cout << maths_table[i][j] << ".." <<flush;
			}
		}

	}
	
	
	return 0;
}
