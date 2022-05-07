#include<bits/stdc++.h>
#include<string >
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
		cin>>a[i];
		int q;
		cin>>q;
		while(q--)
		{
			//cout<<q<<endl<<endl<<endl;
			int l;
			cin>>l;
			if(l!=(int)'U')
			{
				int r,x;
				cin>>r>>x;
				for(int k=l-1;k<r;k++)
				{
					a[k]+=x;
				}
				for(int j=0;j<n;j++)
				cout<<a[j]<<" ";
				cout<<endl;
			}
			else
			{
				
				for(int d=0;d<n;d++)
				cout<<a[d];
				cout<<endl;
			}
		}
	}
}

