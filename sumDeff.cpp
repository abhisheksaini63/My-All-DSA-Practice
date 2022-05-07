#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[7];
	int b[7];
	for(int i=0;i<7;i++)
	cin>>a[i];
	for(int i=0;i<7;i++)
	cin>>b[i];
	
	int sum=0;
	for(int j=0;j<7;j++)
	{
		int big=a[j]>=b[j]?a[j]:b[j];
		int small=a[j]<=b[j]?a[j]:b[j];
		sum+=big-small;
	}
	cout<<sum;
}
