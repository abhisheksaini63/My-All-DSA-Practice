#include<iostream>
using namespace std;
int paris (int , int , int );
int paris(int n,int m, int s)
{
	if(n>=m)
	{
		int d=m+s-1;
		if(d<=n)
		return d;
		else
		return paris(n,d,1);
	}
	if(n<m)
	{
		int y=(m%n)+s-1;
		if(y==0)
		return n;
		if(y<=n)
		return y;
		else
		return paris(n,y,1);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,s;
		cin>>n>>m>>s;
		int result=paris(n,m,s);
		cout<<result<<endl;
	}
	return 0;
}
