#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		int re=1;
		if(n==k)
		cout<<"0"<<endl;
		else if(k==2)
		cout<<"1"<<endl;
		else
		{
			for(int i=1;i<n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					int d=i&j;
					if(k>d && d>=re)
					re=d;
				}
			}
			cout<<re<<endl;
		}
	}
}
