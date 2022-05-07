#include<bits/stdc++.h>
using ll = long long int;
using namespace std;

int solve() {
	int n;
	string s;
	cin >> n >> s;
	int ds = 0;

	vector<int> pos1, pos2;
	for (int i = 0 ; i < n; i++) {
		if (s[i] == '1') pos1.push_back(i + 1);
		else pos2.push_back(i + 1);
	}

	for (int i = 0 ; i < pos2.size() ; i++) {
		int mn = INT_MAX;
		for (int j = 0 ; j < pos1.size() ; j++) {
			int d = abs(pos2[i] - pos1[j]);
			if (mn > d)mn = d;
		}
		ds += mn;

	}
	return ds;


}


int main()
{
	// ios_base::sync_with_stdio(0);
	// cin.tie(0);
	// cout.tie(0);

	int t;
	cin >> t;
	int i = 1;
	while (t--)
	{

		cout << "Case " << "#" << i++ << ": "  <<  solve() << endl << endl;

	}
}