#include<bits/stdc++.h>
#include<vector>
#define macro int long long;
using namespace std; 
int main()
{
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		if(count(v.begin(), v.end(), t)==0)
		{
			v.push_back(t);
			
		}
	}
	int m;
	cin>>m;

	for(int i=0;i<m;i++)
	{
		int t;
		cin>>t;
		if(count(v.begin(), v.end(), t)==0)
		{
			v.push_back(t);
			sort(v.begin(), v.end());
			auto it= find(v.begin(),v.end(),t);
			int indext=it-v.begin()+1;
			cout<<v.size()-indext+1<<endl;	
		}
		else
		{
			sort(v.begin(), v.end());
			auto it= find(v.begin(),v.end(),t);
			int indext=it-v.begin()+1;
			cout<<v.size()-indext+1<<endl;
		}
	}	
}
