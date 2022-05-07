#include<iostream>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	int *a[n];
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		a[i]=new int [t];
		for(int j=0;j<t;j++)
		 cin>>a[i][j];
	}
	
	
	for(int i=0;i<q;i++)
	{
		int b[2];
		cin>>b[0]>>b[1];
		
		cout<<a[b[0]][b[1]];
	}
	return 0;
}
