#include <bits/stdc++.h>
using namespace std;
void reverseInGroups(vector<long long>& arr, int n, int k) {
	int gp = arr.size();
	int s = 0;
	while (gp - s >= k ) {
		reverse(arr.begin() + s, arr.begin() + s + k);
		s += k;
	}

	if (gp - s) {
		reverse(arr.begin() + s, arr.end());
	}


	// code here
}


int main(int argc, char const *argv[])
{
	int n, k;
	cin >> n >> k;
	vector<long long>a(n);

	for (int i = 0 ; i < n; i++)cin >> a[i];

	reverseInGroups(a, n, k);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << endl;
	}
	return 0;
}