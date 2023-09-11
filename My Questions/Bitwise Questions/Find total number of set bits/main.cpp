#include <iostream>
using namespace std;

int find_ones(int n){
	int ans = 0;
	while (n != 0){
		n = (n & (n - 1));
		ans++;
	}
	return ans;
}

int main() {
	
	int n;
	cin >> n;

	cout << find_ones(n);
	
	return 0;
}
