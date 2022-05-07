#include<bits/stdc++.h>
using namespace std;

// Others solution O(log(n))

int findOnce(int arr[], int n) {
	int start = 0, end = n - 1;

	while (start < end) {
		int mid = start + (end - start) / 2;

		if ((mid % 2 == 0) && arr[mid] == arr[mid + 1] ||
		        (mid % 2 != 0) && arr[mid] == arr[mid - 1])
			start = mid + 1;

		else
			end = mid;
	}

	return arr[start];
}

// Mera Solution O(n)

// int findOnce(int a[], int n) {
// 	int x = 0;
// 	for (int i = 0 ; i < n ; i++) {
// 		x ^= a[i];
// 	}
// 	return x;

// }

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0 ; i < n ; i++)cin >> a[i];

	cout << findOnce(a, n);
	return 0;
}