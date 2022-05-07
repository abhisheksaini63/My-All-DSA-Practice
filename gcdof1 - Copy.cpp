#include<bits/stdc++.h>
#include<math.h>
#define macro int long long;
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		int maxi=0;
		for(int i=0;i<n-2;i++)
		{
			int m=(max(a[i],a[i+1])-min(a[i],a[i+1]))+(max(a[i+1],a[i+2])-min(a[i+1],a[i+2]))+(max(a[i+2],a[i])-min(a[i],a[i+2]));
			if(m>=maxi)
			{
				maxi=m;
			}
		}
		cout<<maxi;
	}
		
	return 0;
}
