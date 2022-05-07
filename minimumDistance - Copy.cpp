#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>a;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		a.push_back(t);
	}
	int distance=-1;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				int d=j-1;
				if(distance==(-1))
				distance=d;
				else if(distance>=d)
				distance=d;
				break;
			}
		}
	}
	cout<<distance;
}
