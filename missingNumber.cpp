#include<bits/stdc++.h>
using namespace std;
int missingNumber(int a[], int n)
{
	sort(a , a + n);
	// for (int i = 0 ; i < n; i++)
	// {
	// 	cout << a[i] << " ";
	// }
	// cout << endl;
	for (int i = 0 ; i < n - 1; i++) {
		if (a[i] > 0 && a[i - 1] < 0 && a[i] > 1) return 1;
		if (a[i + 1] - a[i] > 1 && a[i] >= 0) {
			return (a[i] + 1);
		}
	}
	return a[n - 1] + 1;

// Your code here
}
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0 ; i  < n; i++)cin >> a[i];
	int s = missingNumber(a, n);
	cout << s << endl;
	return 0;
}