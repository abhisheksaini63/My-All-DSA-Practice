#include<bits/stdc++.h>
using namespace std;

int countZeros(int a[], int n) {
	int l = 0 , r = n - 1;
	while (l <= r ) {
		if (l == r && a[l] == 0)return n - l;
		int m = (l + r ) / 2;
		if (m == 0 && a[m] == 0) return n - l;
		if (a[m] == 0 && a[m - 1] == 1) {
			return n - m;
		}
		else if (a[m] == 0 && a[m - 1] == 0)r = m - 1;
		else l = m + 1;
	}

	return -1;
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0 ; i < n; i++)cin >> a[i];
	cout << countZeros(a, n);
	return 0 ;
}









// int countZeros(vector<vector<int> >A) {
// 	int count = 0;
// 	for (int i = 0 ; i < A.size() ; i++) {
// 		for (int j  = 0 ; j < A[i].size(); j++) {
// 			if (A[i][j] == 0)count++;
// 		}
// 	}
// 	return count;
// }
// int main() {
// 	int n;
// 	cin >> n;
// 	vector<vector<int>> a(n);

// 	for (int i = 0 ; i < n ; i++) {
// 		for (int j = 0 ; j < n; j++) {
// 			int t;
// 			cin >> t;
// 			a[i].push_back(t);
// 		}
// 	}


// 	cout << countZeros(a);
// }