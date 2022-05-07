#include <bits/stdc++.h>
using namespace std;
int N = 1e7 + 10;

vector<bool> isPrime(N, 1);



int main() {

	isPrime[0] = isPrime[1] = 0;

	for (int i = 2 ; i < N; i++) {
		if (isPrime[i]) {
			for (int j = 2 * i ; j < N;  j += i) {
				isPrime[j] = 0;
			}
		}
	}


	// for (int i = 1; i < 101 ; i++) {
	// 	if (isPrime[i]) {
	// 		cout << "Prime " << endl;
	// 	}
	// 	else cout << "Not Prime" << endl;
	// }

	int q ;
	cin >> q;
	while (q--) {
		int n ;
		cin >> n;
		if (isPrime[n]) {
			cout << "Prime" << endl;
		}
		else cout << "Not Prime" << endl;
	}

}