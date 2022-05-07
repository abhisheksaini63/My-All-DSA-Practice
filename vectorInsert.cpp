#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,k;
	cin>>n;
	cin>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<a.size();
	for(int i=0;i<k;i++)
	{
		int b=a.back();
		a.pop_back();
		a.insert(a.begin(),b);
	}
	for(int j=0;j<n;j++)
	 cout<<a[j];
	return 0;
}
