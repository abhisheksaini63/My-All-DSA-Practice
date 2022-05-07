#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
using ll  = long long int ;

int main()
{
	int n;
	cin >> n;
	vector<ll>a;
	
	for(int i = 0 ; i< n; i++)
	{
		ll t;
		cin >> t;
		a.push_back(t);
	}
	ll mn = INT_MAX;
	for(int i =0; i< n-1 ;i++)
	{
		for(int j = i+1 ;j< n ;j++)
		{
			
		ll  m = *max_element(a.begin()+j,a.end());
		cout << m <<endl;
		ll  c = a[i] - m;
		cout << c << endl;
		}
		if(c >=0 && c<= mn)
		mn = c;
		
	}
	cout << mn << endl;
	return 0;								//5
/////////////////////////////////////////////20 7 8 2 5      2 5 7 8 20 
}
