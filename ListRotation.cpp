#include<iostream>
#include<list>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,k;
		cin>>n>>k;
		
		list<int> a;
		for(int i=0;i<n;i++)
		{
			int g;
			cin>>g;
			a.push_back(g);
		}
		
		for(int j=0;j<k;j++)
		{
			int d=a.back();
			a.pop_back();
			a.push_front(d);
		}
		
		for(auto l=a.begin();l!=a.end();l++)
		 cout<<*l<<" ";
		 
		 t--;
	}
	return 0;
}
