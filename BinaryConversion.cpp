#include<vector>
#include<iostream>
using namespace std;
int main()
{
	vector<int>a;
	int count=0,n,j;
	cin>>n;
	for(int i=0;n>0;i++)
	{ 
		if(n<2)
		{
			j=n;
			a.push_back(j);
			break;
		}
		j=n%2;
		a.push_back(j);
		n=n/2;
	}
	
	for(int i=a.size()-1;i>=0;i--)
	
}
