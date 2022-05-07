#include<bits/stdc++.h>
using namespace std;
int count(int a[], int n, int x) {

	int count = 0;
	int l = 0 , r = n - 1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (a[mid] == x) {
			count++;
			int i  = mid - 1, j = mid + 1;
			while (a[i-- ] == x && mid >= 0) count++;
			while (a[j++] == x && mid < n) count++;
			return count ;
		}
		else if (a[mid] < x) l = mid + 1;
		else r = mid - 1;
	}
	return count;
}
// code here


int main() {
	int n, x;
	cin >> n >> x;
	int a[n];
	for (int i = 0 ; i < n; i++)cin >> a[i];

	cout << count(a, n, x);
	return 0;
}