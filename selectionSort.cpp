#include<iostream>
using namespace std;
int k=0;
int Ssort(int a[],int n)
{
	int loc=k,min=a[k];
	for(int i=k;i<n-1;i++)
	if(min>a[i+1])
	{
		min=a[i+1];
		loc=i+1;
	}
	return loc;
}

int main()
{
	int loc,temp;
	int a[10];
	for(int l=0;l<10;l++)
	cin>>a[l];
	for(int i=0;i<4;i++)
	{
		loc=Ssort(a,10);
		temp=a[i];
		a[i]=a[loc];
		a[loc]=temp;
		k++;
	}
	for(int j=0;j<10;j++)
	cout<<a[j]<<" ";
}
