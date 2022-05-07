#include<bits/stdc++.h>
using namespace std;
int main() {
	int n ;
	cin >> n;
	int a[n];

	for (int i = 0 ; i < n; i++) {
		cin >> a[i];
	}

	int b = 1 << n;
	cout << b << endl;

	for (int i = 0 ; i < b; i++) {
		int t = i;
		int co = 0;
		while (t > 0 ) {
			if (t & 1) {
				cout << a[co++] << " ";
				// cout << t << endl;
				
				// cout << t << endl;
			}
			t  = t >> 1;
		}
		cout << endl;
	}
	return 0;

}
