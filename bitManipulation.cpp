#include<bits/stdc++.h>
using namespace std;
bool isSparse(int n)
{


	while (n > 0) {
		for (int i = 10 ; i > 0; i--) {
			cout << ((n >> i) & 1);
		}
		cout << endl;
		if ((n & 1) == 0) {
			return 0;
		}
		n = n >> 1;
	}
	return 1;

	// cout << endl;
	// // int s = n & 1;
	// // n = n >> 1;
	// while (n > 0) {
	// 	if (n & 1 == 1 && ( (n >> 1) & 1  ) == 1 ) {
	// 		return false;
	// 	}
	// 	n = n >> 1;
	// }
	// return true;
	// Your code
}

int main() {
	int n;
	cin >> n;
	cout << isSparse(n);
}