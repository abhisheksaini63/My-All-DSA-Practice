#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,d;
		cin>>n>>d;
		int a[n];
		for(int j=0;j<n;j++)
		 cin>>a[j];
		 
		int s=a[0];
		for(int l=2;l<=d;l++)
		{
			if(s==d)
			 break;
			if(s>d)
			 {
			 	s=s-a[0];
			 	break;
			 }
			else 
			s=a[0]*l;
		}
	cout<<"Case #"<<i<<": "<<s<<endl;
	}
	return 0;
}
