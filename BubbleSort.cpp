#include<iostream>
using namespace std;
void BubbleSort(int a[],int n)
{
	int round;
	for( int round=1;round<=n-1;round++)
	{
	 for(int i=0;i<=n-1-round;i++)
	  if(a[i]>a[i+1])
	   {
	   	 int temp=a[i];
	   	 a[i]=a[i+1];
	   	 a[i+1]=temp;
	   }
	   
	}
}
int main()
{
	int n;
	cout<<"Enter the size of array= ";
	cin>>n;
	int a[n];
	cout<<"\nEnte the values = ";
	for(int i=0;i<n;i++)
	cin>>a[i];
	BubbleSort(a,n);
	cout<<"\nSorted Array ";
	for(int j=0;j<n;j++)
	cout<<a[j]<<" ";
	return 0;
}
