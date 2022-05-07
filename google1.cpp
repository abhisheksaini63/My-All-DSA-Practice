#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{   
	     int n,count=1;
	     vector<int>v;
	    cin>>n;
	    int a[n];
	    for(int l=0;l<n;l++)
	    cin>>a[l];
		for(int j=0;j<n-1;j++)
		 {
		 	int k,r=a[j]-a[j+1];
		 	for( k=j;k<n-1;k++)
		 	{   count=1;
		 		if(a[k]-a[k+1]==r)
		 		{
		 			count++;
		 			
				 }
		 		else
				 {
		 			j=k-1;
		 			v.push_back(count);
		 			break;
				 }
			 
			 }
			 
		  if(k==n-1)
				 {
				 	v.push_back(count);
				 	break;
				 }
		 }
	sort(v.begin(),v.end());
			 int s=v.size();
			 cout<<v[s-1];
	}
	return 0;
}
