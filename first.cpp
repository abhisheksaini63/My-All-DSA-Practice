#include<bits/stdc++.h>
using ll = long long int;
using namespace std;
int main()
{
	// ios_base::sync_with_stdio(0);
	// cin.tie(0);
	// cout.tie(0);

	int n;
	cin >> n;
	int a[n], count = 0, IE = 0, f = 0;

	for (int i = 0 ; i < n ; i++) {

		cin >> a[i];
	}

	while (true) {

		for (int i = 0 ; i < n ; i++) {
			count  += IE + a[i];
			if (count <= 0) {IE++; count = 0; break;}
			f++;

		}
		if (f == n) {
			break;
		}
		else {
			f = 0;
		}

	}

	// cout << endl;
	cout << ++IE << endl;
	return 0;
}