#include<iostream>
using namespace std;
int main()
{
	int n,i,temp;
	cout<<"Enter tha number of values => ";
	cin>>n;
	int a[n];
	cout<<"\nEnter the vlaues => ";
	for(int f=0;f<n;f++)
	cin>>a[f];
	for(int j=1;j<n;j++)
	{
		temp=a[j];
		for( i=j-1;i>=0&&temp<=a[i];i--)
		a[i+1]=a[i];
		a[i+1]=temp;
	}
	cout<<"\nsorted array is => ";
	for(int l=0;l<n;l++)
	cout<<a[l]<<" ";
	return 0;
}
