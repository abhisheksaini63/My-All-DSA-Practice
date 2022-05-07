#include<bits/stdc++.h>
#define macro int long long;
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int k;
	cin>>k;
	char l='A';
	char o=l;
	for(int i=1;i<=k;i++)
	{
		
		for(int j=1;j<=k;j++)
	{
		if(j<i)
		{
			cout<<"_";
			l+=1;
		}
		else
		{
			cout<<l;
			l+=1;
		}
		
	}
	l='A';
	cout<<endl;

	}
	}
}
