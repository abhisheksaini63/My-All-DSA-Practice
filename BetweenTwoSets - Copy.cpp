#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int b[m];
	for(int i=0;i<m;i++)
	cin>>b[i];
	
	int d=a[n-1],count=1,X=0,l=1;
	while(d<=b[0])
	{
		l++;
		count=1;
		for(int j=0;j<n;j++)
		{
			if(d%a[j]!=0)
			{
				count=0;
				break;
			}
			
		}
		
		for(int k=0;k<m;k++)
		{
			if(b[k]%d!=0)
			{
				count=0;
				break;
			}
		}
		
		if(count==1)
		X++;
		d=a[n-1]*l;
	}
	cout<<X;
}


