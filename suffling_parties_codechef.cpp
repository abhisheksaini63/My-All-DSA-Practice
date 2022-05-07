#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		vector<int> v;
		for (int i = 0; i < n; ++i) cin >> v[i];
		int e = 0 , o = 0;
		for (int i = 0 ; i < n; i++) (v[i] & 1) ? o++ : i++;

		int count = 0, check = 1;
		while (e && o) {
			if (check) {
				count++;
				check = 0;
				e--;
			}
			else {
				count++;
				check = 1;
				o--;
			}

		}
	}
	return 0;
}