#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	vector<int> v;
	for (int i = 0 ; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}

	if (find(v.begin(), v.end(), k) != v.end()) {
		cout << "1" << endl;
	}
	else cout << "-1" << endl;
	return 0;
}