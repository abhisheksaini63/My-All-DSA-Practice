#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n ;
	vector<int> a[n];
	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < n ; j++)cin >> a[i][j];
	}

	vector<int> ans[n];

	for (int i  = 0 ; i < n; i++) {
		for (int j  = 0 ; j < n ; j++) {
			ans[j][i] = a[i][n - 1 - j];
		}
	}


	for (int i  = 0 ; i < n; i++) {
		for (int j  = 0 ; j < n ; j++) {
			cout << ans[i][j] << " ";
		} cout << endl;
	}

	return 0;
}