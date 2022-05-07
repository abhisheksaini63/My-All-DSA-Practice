#include<iostream>
using namespace std;
int min(int a[],int n,int k)
{
	int loc=k;
	int mini=a[k];
	for(int i=k+1;i<n;i++)
	 {
	 	if(mini>a[i]){
	 		mini=a[i];
	 		loc=i;
		 }
	 }
	 
	 return loc;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int j=0;j<n;j++)
	cin>>a[j];
	for(int k=0;k<n-1;k++)
	{
		int loc=min(a,n,k);
		int temp=a[k];
		a[k]=a[loc];
		a[loc]=temp;
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
