#include<bits/stdc++.h>
#include<vector>
#include<string>
using ll = long long int;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	while (t--)
	{
		ll n, value = 0 , flag = 0; 
		cin >> n;
		ll a[n];
		for(ll i = 0 ;i<n ;i++)
		{
			cin >>a[i];
		}
		
		sort(a,a+n);
		for(ll i = 0 ;i< n; i++)
		{
			if((i +1 - a[i]) < 0)
			{
				flag = 1;
				break;
			}
			value += i + 1 - a[i];
		}
		
		if(flag == 1)
		{
			cout << "Second" <<endl;
		}
		
		else 
		{
			if(value %2 == 1)
			cout << "First" <<endl;
			else 
			cout << "Second" << endl;	
		}
	}
}
