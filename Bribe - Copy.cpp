#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		int n,sum=0;
		cin>>n;
		vector<int>a;
		for(int i=0;i<n;i++)
		{
			int k;
			cin>>k;
			a.push_back(k);
		}
		
		for(int l=n;l>=1;l--)
		{
			auto it= find(a.begin(),a.end(), l);
			int index = it-a.begin()+1;
			int bribe=l-index;
			if(bribe<=2)
			 {
			 	sum+=1;
			 }
			else
			 break;
		}
		
	
	
	}
}
