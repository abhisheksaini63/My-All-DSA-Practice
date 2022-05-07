#include<bits/stdc++.h>
using namespace std;
int maxSubArrSum(int a[], int n) {
	int currsum = 0;
	int maxSum = 0;

	for (int i = 0  ; i < n; i++) {
		currsum += a[i];
		if (currsum > maxSum) maxSum = currsum;
		if (currsum < 0) currsum = 0;
	}
	return maxSum;
}
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0 ; i < n; i++) cin >> a[i];

	int s = maxSubArrSum(a, n);
	cout << s << endl;
	return 0;
}