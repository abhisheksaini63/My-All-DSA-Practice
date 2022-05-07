#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0 ; i < n; i++)cin >> a[i];


	for (int i = 0 ; i < n ; i++) {
		swap(a[i] , a[a[i]]);
		for (int i = 0 ; i < n ; i++) cout << a[i] << " ";

		cout << endl;
	}
	cout << endl;

	for (int i = 0 ; i < n ; i++) cout << a[i] << " ";
	return 0;
}