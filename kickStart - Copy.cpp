#include<bits/stdc++.h>
using ll = long long int;
using namespace std;

int solve() {
	int n;
	string s;
	cin >> n >> s;
	int ds = 0;

	for (int i = 0 ; i < n ; i++) {
		if (s[i] == '0') {
			int dl = 0 , dr = 0;

			for (int j = i - 1  ; j >= 0 ; j--) {
				dl++;
				if (s[j] == '1')break;

			}
			for (int k = i + 1  ; k < n  ; k++) {
				++dr;
				if (s[k] == '1')break;
			}

			int d =  min(dl, dr);
			cout << d << endl;
			ds += d;
		}
	}
	return ds;


}


int main()
{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);

	int t;
	cin >> t;
	int i = 1;
	while (t--)
	{

		cout << "Case " << "#" << i++ << ": "  <<  solve() << endl << endl;

	}
}
