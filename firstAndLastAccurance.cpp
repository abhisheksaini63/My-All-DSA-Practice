#include<bits/stdc++.h>
using namespace std;
vector<int> firstAndLast(vector<int> &arr, int n, int k) {
	// Code here
	vector<int> v;
	for (int i = 0 ; i < n; i++) {
		if (arr[i] == k) {
			v.push_back(i); break;
		}
	}
	if (v.size() == 0) {
		v.push_back(-1);
		return v;
	}
	for (int i = n - 1 ; i >= 0; i--) {
		if (arr[i] == k) {
			v.push_back(i); break;
		}
	}
	return v;
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for (int i = 0 ; i < n; i++)cin >> v[i];
	vector<int> vr = firstAndLast(v, n, k);
	for (auto a : vr) {
		cout << a << " ";
	}

	return 0;

}