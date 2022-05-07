#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char a='A';
		int k=1;
		
		for(int i=1;i<=n;i++)
		{
			
			for(int j=1;j<=i*2;j++)
			{
				if(j<n)
				if(j>n+1-i&&j<n+1)
				{
					cout<<k;
					k++;
				}
				else
				cout<<" ";
				
				if(j>=n&&j<=n+1-i)
				{
					cout<<k;
					k++;
				}
				else
				{
					co
				}
			}
			cout<<endl;
			
		}
	}
}
