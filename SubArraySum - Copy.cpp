#include<bits/stdc++.h>
#define macro int long long ;
#include<vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	cin >> a[i];
	
	long sum = 0;
	
	for(int round = 1; round <= n; round++)
	{
		for(int i = 0 ;i < n+1-round ; i += round)
		{
			for(int j = i ;j < round ;j++)
			{
				sum += a[i];
			}
		}
	}
	
	cout<< sum;
}
