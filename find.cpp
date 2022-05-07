#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int > a;
	for(int i=1;i<n;i++)
	{
		int t;
		cin>>t;
		a.push_back(t);
	}
	
	for(int j=1;j<=n;j++)
	{
		auto t= find(a.begin(), a.end(), j);
		int index= t-a.begin();
		 
	
		 
		auto p= find (a.begin(), a.end(), index+1);
		int in=p-a.begin();
		
		cout<<in+1<<endl ;
		
	}
	return 0;
}
