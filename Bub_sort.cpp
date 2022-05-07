#include<iostream>
using namespace std;
void Bubble_sort(int [],int n);
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	Bubble_sort(a,n);
	for(int j=0;j<n;j++)
	cout<<a[j]<<" ";
	return 0;
}

void Bubble_sort(int a[], int n)
{
	for(int i=0;i<n-1;i++)
	 for(int j=0;j<n-1-i;j++)
	  if(a[j]>a[j+1])
	    {
	    	int temp=a[j];
	    	 a[j]=a[j+1];
	    	 a[j+1]=temp;
		}
}
