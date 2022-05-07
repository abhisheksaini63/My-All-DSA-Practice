#include<bits/stdc++.h>
using namespace std;
int equilibriumPoint(long long a[], int n) {
	if (n == 1 ) return 1;
	int index = n / 2;
	int count = 0;
	long long ls = 0 , rs = 0;
	for (int i = 0; i < index; ++i)
	{

	}

}

int main() {
	int n;
	cin >> n;
	long long a[n];
	for (int i = 0 ; i < n; i++)cin >> a[i];
	int s = equilibriumPoint(a, n);
	cout << s << endl;

	return 0;

}
