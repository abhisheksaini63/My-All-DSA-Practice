#include<iostream>
using namespace std;
void Bubble_sort(int a[], int n)
{
	int r;
	int flag=0;
	int swap=0;
	for(int round=0;round<n-1;round++)
	  {
	  	flag=0;
	  	for(int i=0;i<n-1-round;i++)
	   if(a[i]>=a[i+1])
	    {
	    	flag=1;
	    	swap++;
	    	r=a[i];
	    	a[i]=a[i+1];
	    	a[i+1]=r;
		}
		
		if(flag==0)
		 {
		 	cout<<round<<endl<<swap<<endl;
		 	return;
		 }
	  }
}
int main()
{
	int n;
	cout<<"Enter the number of values =>";
	cin>>n;
	int a[n];
	cout<<"\nEnter the values => ";
	for(int i=0;i<n;i++)
	cin>>a[i];
	Bubble_sort(a,n);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
