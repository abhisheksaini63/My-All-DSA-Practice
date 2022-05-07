#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	 {
	 	int n,k,sum=0;
	 	cin>>n>>k;
	 	int s=0;
	 	int a[n];
	 	for(int i=0;i<n;i++)
	 	 cin>>a[i];
	 	 sort(a,a+n);
	 	 for(int i=0;i<n;i++)
	 	  {
	 	  	
	 			s+=a[i];
	 			if(s<=k)
	 			sum++;
				 if(s>k)	
				 break; 			 
		   }
		   cout<<sum<<" ";
	 }
}
