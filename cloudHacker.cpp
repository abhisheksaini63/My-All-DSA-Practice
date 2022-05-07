#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,k,e=100,j=0;
	cin>>n>>k;
	vector<int> a;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		a.push_back(t);
	}
	
	do{
		if(a[j]==0)
		 e=e-1;
		else 
		 e=e-3;
		 
		j=(j+k)%n;
		
	}while(j!=0);
	
	cout<<e;
}
