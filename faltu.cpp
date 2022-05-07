#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n ;

	int a[n];
	for(int i = 0 ;i < n ;i++)cin >> a[i];

	int val = a[n-1];
	for(int i = n-2; i>=0; i--)
	{
		
		if(val < a[i])
		{
			a[i+1] = a[i];
		}
		if(val > a[i])
		{
			a[i+1] = val;
			for(int k = 0 ;k < n ;k++) cout << a[k] << " ";
			cout << endl;
			break;
		}
		for(int k = 0 ;k < n ;k++) cout << a[k] << " ";
		cout << endl;
		if(i == 0 )
		{
			a[i]= val;
			for(int k = 0 ;k < n ;k++) cout << a[k] << " ";

		}
	}
	return 0;
}