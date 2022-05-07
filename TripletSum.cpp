#include<bits/stdc++.h>
using namespace std;
int findTriplets(int a[], int n) {
	sort(a, a + n);

	for (int i = 0 ; i < n; i++) {
		int cn = a[i], l = i + 1, r = n - 1;
		while (l < r) {
			int cs = cn + a[l] + a[r];
			if (cs == 0) return 1;
			else if (cs  < 0 ) l++;
			else r--;
		}
	}
	return 0;

}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0 ; i < n; i++)cin >> a[i];

	cout << findTriplets(a, n);
	return 0;

}