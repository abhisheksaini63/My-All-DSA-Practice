#include<iostream>
#include<vector>
#inclue<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>result;
	vector<int> a;
	for(int i=0;i<n;i++)
	 {
	 	int t;
	 	cin>>t;
	 	a.push_back(t);
	 }
	 
	int m;
	cin>>m;
	vector<int>ab;
	for(int i=0;i<n;i++)
	 {
	 	int t;
	 	cin>>t;
	 	ab.push_back(t);
	 }
	 
	 for(int i=0;i<m;i++)
	 {
	 	int r=ab[i];
	 	int h=0, count=1;
	 	
		a.push_back(r);
	 	
		sort(a.begin(), a.end());
	 	
		for(int j=0;j<a.size();j++)
		{
			if(a[j]==r)
			 {
			 	count++;
			 	break;
			 }
			
			else if(a[j])
		}
	 	
	 	
	 	
	 }
	 
	 
}
