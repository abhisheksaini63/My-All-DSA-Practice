#include<iostream>
using namespace std;
int min(int a[], int n, int k)
{
	int loc,min;
	min=a[k];
	loc=k;
	for(int j=k+1;j<n;j++)
	if(min>a[j])
	{
		min=a[j];
		loc=j;
	}
	return loc;
}

int main()
{
	int n,loc,k;
	cout<<"Enter the number of values => ";
	cin>>n;
	int a[n];
	cout<<"\nEnter the values => ";
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(k=0;k<n-1;k++)
	{
		loc=min(a,n,k);
		int temp;
		temp=a[k];
		a[k]=a[loc];
		a[loc]=temp;
	}
	cout<<"\nSorted array is => ";
	
	for(int j=0;j<n;j++)
	cout<<a[j]<<" ";
	return 0;
}
