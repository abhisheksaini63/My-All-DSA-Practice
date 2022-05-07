#include<bits/stdc++.h>
using namespace std;
int majorityElement(int a[], int n)
{

	// your code here
	// if (n == 1 ) return a[0];
	if (n == 2 && a[0] != a[1]) return -1;
	sort(a, a + n);
	int nt = n / 2;
	if (n % 2 == 0  && a[nt] == a[n - 1] && a[nt - 1] == a[0]) return -1;
	if (a[nt] == a[n - 1] || a[nt] == a[0]) return a[nt] ;
	else return -1;

}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int s = majorityElement(a, n);
	cout << s << endl;
	return 0;

}