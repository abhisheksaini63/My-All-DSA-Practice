#include<iostream>
using namespace std;
int main()
{
	int n,k,s;
	cin>>n>>k>>s;
	int div=k%n;
	int sum=s+div-1;
	if(div==0)
	cout<<s;
	else if(sum<=n)
	cout<<sum;
	else
	{
		sum=sum-n;
		cout<<sum;
	}
	return 0;
	
}
