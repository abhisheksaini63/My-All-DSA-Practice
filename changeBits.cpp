#include<bits/stdc++.h>
using namespace std;
// vector<int> changeBits(int N) {

// 	vector<int> v;




// 	return v;
// 	// code here

// }

int main() {
	int n;
	cin >> n;
	// vector<int> v;
	// v = changeBits(n);
	// for (int i = 0 ; i < v.size() ; i++) {
	// 	cout << v[i] << " ";
	// }

	int msb = 0;
	int nu = n;
	for (int i = 1 ; nu > 0; i++) {
		if (nu & 1) {
			msb = i;

		}
		nu = nu >> 1;
	}
	cout << msb << " " ;

	for (int i = 1; i < msb ; i++) {

	}

	return 0;
}