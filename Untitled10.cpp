#include<iostream>
#include<cmath>
#include<algorithm>
using ll = long long int;
using namespace std;
int main()
{
	ll n;
	cin>> n;
	ll a[n];
	for(ll i = 0 ;i< n;i++)
	cin>> a[i];
	ll m = INT_MAX;
	
	sort(a,a+n);
	
	for(ll i= 1; i< n;i++ )
	{
		ll d = abs(a[i]-a[i-1]);
		if(d<m)
		m = d;
	}
	cout << m;
}
