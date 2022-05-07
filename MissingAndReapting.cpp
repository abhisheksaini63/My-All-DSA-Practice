#include<bits/stdc++.h>
using namespace std;
int a[2];
int *findTwoElement(int *arr, int n) {
	// code here

	sort(arr, arr + n);
	for (int v = 0 ; v < n ; v++) {
		cout << arr[v] << " " ;
	}
	cout << endl;
	for (int i = 0 ; i < n - 1 ; i++) {
		if (arr[i + 1] - arr[i] == 0) {
			a[0] = arr[i];
			break;
		}
	}
	if (arr[0] > 1) {
		a[1] = 1;
		return a;
	}
	else {
		for (int i = 0 ; i < n - 1 ; i++) {
			if (arr[i + 1] - arr[i] > 1) {
				a[1] = arr[i] + 1;
				return a;
			}
		}
		a[1] = arr[n - 1] + 1;
		return a;

	}
	return a;

}
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0 ; i < n; i++)cin >> a[i];

	int *p = findTwoElement(a, n);

	for (int i = 0 ; i < 2; i++)cout << (p[i]) << " " ;
	return 0;
}