#include<bits/stdc++.h>
#define macro int long long;
using namespace std;
int gcd(int a,int b)
{
	if(a==0)
	return b;
	return gcd(b%a,a);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
	cin>>n>>m;
	int count=gcd(n,m);
	int f=n/count;
	int l=m/count;
	cout<<f*l<<endl;
	}
	return 0;
}
