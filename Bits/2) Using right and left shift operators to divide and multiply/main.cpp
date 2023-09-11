#include <iostream>
using namespace std;

int main() {
	
	int n = 5;

	cout <<   n    <<" ";	// Binary for 5 (not shifted)     = . . . . . 1 0 1  =  (4   + 1  =   5)
	cout << (n<<1) <<" ";	// Binary for 5 left shifted by 1 = . . . . 1 0 1 .  =  (8   + 2  =  10) = 5 x 2
	cout << (n<<2) <<" ";	// Binary for 5 left shifted by 2 = . . . 1 0 1 . .  =  (16  + 4  =  20) = 5 x 4
	cout << (n<<3) <<" ";	// Binary for 5 left shifted by 3 = . . 1 0 1 . . .  =  (32  + 8  =  40) = 5 x 8
	cout << (n<<4) <<" ";	// Binary for 5 left shifted by 4 = . 1 0 1 . . . .  =  (64  + 16 =  80) = 5 x 16
	cout << (n<<5) <<"\n";	// Binary for 5 left shifted by 5 = 1 0 1 . . . . .  =  (128 + 32 = 160) = 5 x 32

	// General rule : Output for 'n' left shifted by 'p' = n x (2^p)

	n <<= 5;

	cout << n << " ";		// Binary for 160 (not shifted)      = 1 0 1 0 0 0 0 0  =  (128 + 32 = 160)
	cout << (n>>1) <<" ";	// Binary for 160 right shifted by 1 = . 1 0 1 0 0 0 0  =  (64  + 16 =  80) = 160 / 2
	cout << (n>>2) <<" ";	// Binary for 160 right shifted by 2 = . . 1 0 1 0 0 0  =  (32  + 8  =  40) = 160 / 4
	cout << (n>>3) <<" ";	// Binary for 160 right shifted by 3 = . . . 1 0 1 0 0  =  (16  + 4  =  20) = 160 / 8
	cout << (n>>4) <<" ";	// Binary for 160 right shifted by 4 = . . . . 1 0 1 0  =  (8   + 2  =  10) = 160 / 16
	cout << (n>>5) <<" ";	// Binary for 160 right shifted by 5 = . . . . . 1 0 1  =  (4   + 1  =   5) = 160 / 32
	cout << (n>>6) <<" ";	// Binary for 160 right shifted by 6 = . . . . . . 1 0  =  (4   + 0  =   2) = 160 / 64
	cout << (n>>7) <<" ";	// Binary for 160 right shifted by 7 = . . . . . . . 1  =  (1   + 0  =   1) = 160 / 128
	cout << (n>>8) <<" ";	// Binary for 160 right shifted by 8 = . . . . . . . .  =  (0   + 0  =   0) = 160 / 256

	// General rule : Output for 'n' right shifted by 'p' = n / (2^p)


	return 0;
}
