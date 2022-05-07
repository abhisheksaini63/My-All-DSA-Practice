#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector <int > a;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		a.push_back(t);
	}
	cout<<a.size();
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		int w,j=0;
		cin>>w;
		int s=0,d=a.size()/2;
		if(a[d]>w)
		{
			while(a[d]>w)
		{
			s=d;
			d=d/2;
		}
		
		for(int j=d-1;j<=s;j++)
		{
			if(a[j]==w)
			 {
			 	cout<<"Yes "<<j+1<<endl;
			 	break;
			 }
			if(a[j]>w)
			{
				cout<<"No "<<j+1<<endl;
			 	break;
			}
		}
		}
		else
		{
			for(int k=d;k<a.size();k++)
			{
				if(a[k]==w)
			 {
			 	cout<<"Yes "<<k+1<<endl;
			 	break;
			 }
			if(a[k]>w)
			{
				cout<<"No "<<k+1<<endl;
			 	break;
			}
			}
		}
		/*if(w>a[d])
		for(j=d;j<a.size();j++)
		{
			if(a[j]==w)
			 {
			 	cout<<"Yes "<<j+1<<endl;
			 	break;
			 }
			if(a[j]>w)
			{
				cout<<"No "<<j+1<<endl;
			 	break;
			}
		}
		else
		{
			for(int i=0;i<=d;i++)
			{
				if(a[i]==w)
			 {
			 	cout<<"Yes "<<i+1<<endl;
			 	break;
			 }
			if(a[i]>w)
			{
				cout<<"No "<<i+1<<endl;
			 	break;
			}
			}
			
		}*/
		
	}
}
