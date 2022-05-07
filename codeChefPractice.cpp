#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0 ; i < n ; i++)cin >> a[i];

	// vector<int > b(3);
	// for (int i = 0 ; i < 3; i++)b[i] = INT_MIN;

	// for (int i = 0 ; i < n; i++) {
	// 	for (int j = 2 ; j >= 0 ; j--) {
	// 		if (a[i] >= b[j] && j == 2) {
	// 			b[0] = b[1];
	// 			b[1] = b[2];
	// 			b[2] = a[i];
	// 			break;

	// 		}
	// 		else if (a[i] >= b[j] && j == 1) {
	// 			b[0] = b[1];
	// 			b[1] = a[i];
	// 			break;

	// 		}


	// 		else if (j == 0 && a[i] > b[0]) {
	// 			b[0] = a[i];
	// 			break;
	// 		}
	// 	}
	// }

	for (int i = 0 ; i < n; i++)cout << a[i] << endl;
	return  0;

}