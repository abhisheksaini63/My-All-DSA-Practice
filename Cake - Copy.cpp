#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>a;
	for(int i=1;i<=n;i++)
	{
		int t;
		cin>>t;
		if(t==1)
		a.push_back(i);
	}
	cout<<a.size()<<" ";
	int count=0;
	for(int j=1;j<a.size();j++)					//1 3 4 6 7
	{
		for(int i=0;i<a.size();i++)
		{
			int dif=a[i+1]-a[i];
			if(dif==j)
			count++;
		}
		cout<<count<<" ";
		count=0;
	}
	return 0;
}
