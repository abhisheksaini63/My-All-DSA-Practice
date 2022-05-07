#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve() {
	ll n; cin >> n;
	string s, p;
	cin >> s >> p;
	if (s == p) {
		cout << "YES" << endl; return;
	}
	int s0 = 0 , s1 = 0 , p0 = 0 , p1 = 0;
	for (int i = 0 ; i < s.size() ; i++) {
		if (s[i] == '0') {
			s0++;
		}
		else {
			s1++;
		}

		if (p[i] == '0') {
			p0++;
		}
		else p1++;

	}
	if (p0 && p1) {
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;

}
int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}