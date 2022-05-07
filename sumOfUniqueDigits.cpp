#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<set>
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
		set<ll> a;
		int n;
		cin  >> n;
		for(int i= 0 ; i< n ;i++)
		{
			int s;
			cin>> s;
			a.insert(s);
		}
		ll sum = 0 ;
		auto it = a.begin();
		for(int i = 0 ;i< a.size();i++)
		{
		   sum += *it;
		   ++it;
		}
		cout << sum ;
	}
	return 0;
}
