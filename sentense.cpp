#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int res = 0;
	vector<string> a;
	for (int i = 0 ; i < n + 1 ; i++) {
		string s;
		getline(cin, s);
		a.push_back(s);
	}
	// for (int i = 0;  i < a.size(); i++) {
	// 	int count = 0;
	// 	// cout << a[i];
	// 	for (int j = 0 ; j < a[i].size(); j++) {
	// 		cout << a[i][j] << " ";
	// 		// if (a[i][j] == " ") count++;
	// 	}
	// 	if (res < count ) res = count;
	// }
	for (string s : a) {
		int count = 0;
		for (char c : s) {
			if (c == ' ')count++;
		}
		if (res < count) res = count;
	}
	cout << res << endl;
	return 0;
}

// return Math.max(f,l);