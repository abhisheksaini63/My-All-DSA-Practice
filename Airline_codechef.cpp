#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0 ; i < n; i++) {
			cin >> v[i];
		}

		vector<int> b;
		for (int i = 0 ; i < n; i++) {
			int res = (v[i] + (i + 1)) % 2;
			cout << res;
			b.push_back(res);
		}
		for (auto val : b) {
			cout <<  val << " ";
		}

		cout << endl;
		int r = 0;
		for (auto val : b) {
			r += val;
		}
		cout << r << endl;

	}
	return 0;
}