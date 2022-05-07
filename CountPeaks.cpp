#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++)
		 cin>>a[j];
		 
		int s=0,d=0,f=0,count=0;
		for(int k=1;k<n-1;k++)
		{
			s=a[k-1];
			d=a[k];
			f=a[k+1];
			if(d>s && d>f)
			 count++;
			 
		}
		
		cout<<"Case #"<<i+1<<": "<<count<<endl;
	}
	return 0;
}

