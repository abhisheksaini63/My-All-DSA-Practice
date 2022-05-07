#include<iostream>
using namespace std;
int fun(int n)
{
	int x=1,k;
	if(x==n)
	return x;
	else
	{
		for(k=1;k<n;++k)
		x=x+fun(k)*fun(n-k);
		return x;
	}
}
int main()
{
	cout<<fun(2);
	return 0;
}
