#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int c = 1;
	int a[5] = {1, 2, 3, 4, 5};
	int b[5] = {10, 9, 8, 7, 6};

	for (int i = 1; i <= n; i++) {

		if (i & 1) {
			for (int j = 0; j < 5; j++) {
				cout << a[j] << " " ;
				a[j] += 10;
			}
			cout << endl;
		}

		else {
			for (int j = 0; j < 5; j++) {
				cout << b[j] << " ";
				b[j] += 10;
			}
			cout << endl;
		}
	}
	return 0;
}