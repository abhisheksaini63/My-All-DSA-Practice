#include<bits/stdc++.h>
using namespace std;
const int M = 1e9;
int power ( int a , int b ) {
	if (b == 0 ) return 1;
	int res = power(a, b / 2);
	if (b & 1) {
		return (a * (res * 1LL * res) % M) % M ;
	}
	else return (res * res * 1LL) % M;
}
int main() {
	int a, b;
	cin >> a >> b;

	int ans = power(a, b);
	cout << ans << endl;
	return 0;


}