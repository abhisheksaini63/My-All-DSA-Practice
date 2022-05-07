#include <bits/stdc++.h>

using namespace std;

int maxarr(int a[], int n) {

	int d = 0, res = -1;
	int r = 0;
	unordered_map <int , int > m ;
	for (int i = 0 ; i < n; i++) {
		m[a[i]]++;
	}

	for (auto val : m) {
		if (d < val.second) {
			res = val.first;
			d = val.second;
		}
	}


	if (m[res] == 1) return -1;
	return res;
}
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0 ; i < n; i++) cin >> a[i];

	int r = maxarr(a, n);
	cout << r << endl;
	return 0;
}