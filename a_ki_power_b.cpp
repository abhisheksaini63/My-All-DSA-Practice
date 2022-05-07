#include<bits/stdc++.h>
using namespace std;
const int M = 1e9;


// Recurcive approach

int power ( int a , int b ) {
	if (b == 0 ) return 1;
	int res = power(a, b / 2);
	if (b & 1) {
		return (a * (res * 1LL * res) % M) % M ;
	}
	else return (res * res * 1LL) % M;
}

// Iterative approach

int itpow (int a, int b) {
	int ans = 1;
	while (b) {
		if (b & 1) {
			ans = (ans * 1LL * a) % M;
		}
		a = (a * 1LL * a) % M;
		b >>= 1;
	}
	return ans;
}


int main() {
	int a, b;
	cin >> a >> b;

	int ans = itpow(a, b);
	int sa = power(a, b);
	cout << ans << endl;
	cout << sa << endl;
	return 0;


}