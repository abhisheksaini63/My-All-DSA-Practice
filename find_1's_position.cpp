#include<bits/stdc++.h>
using namespace std;
int firstIndex(int a[], int n)
{
	if (a[0] == 1) return 0;
	// Your code goes here
	int l = 0, r = n - 1;
	while (l <= r) {
		int m = (l + r ) / 2;
		if (a[m] == 1 && a[m - 1] == 0)  return m;
		else if (a[m] == 1) r = m - 1;
		else l = m + 1;
	}

	return -1;
}
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{	cin >> a[i];
		/* code */
	}

	int res = firstIndex(a, n);
	cout << res << endl;

	return 0;
}