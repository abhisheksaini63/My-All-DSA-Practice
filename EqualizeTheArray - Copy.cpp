#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>a;
	for(int p=0;p<n;p++)
	{
		int t;
		cin>>t;
		a.push_back(t);
	}
	
	sort(a.begin(),a.end());
	int big=1,part=1,de=0;
	for(int i=0;i<a.size()-1;i++)
	{	part=1;													//	1 2 3 3 
		while(a[i]==a[i+1]&&i<a.size()-1)
		{
			part++;
			i++;
		}
		
		if(big<part)
		big=part;
	}
	
	cout<<a.size()-big;
	
}
