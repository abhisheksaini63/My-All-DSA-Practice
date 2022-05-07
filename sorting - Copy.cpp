#include<iostream>
#include<algorithm>
#include<conio.h>
using namespace std;
int  main()
{	
    int mid,l=0,u=9,n;
	int a[10];
	cout<<"Enter the 10 values =";
	for(int i=0;i<10;i++)
	cin>>a[i];
	cout<<"Enter the number that you want to find =";
	cin>>n;
	sort(a,a+10);
	mid=(l+u)/2;
	while(l<=u)
	{
		if(a[mid]==n)
		{
		 cout<<"Search at index ="<<l;
		 break;
		}
		else if(a[mid]<n)
		{
			l=mid+1;
			mid=(l+u)/2;
		}
		else 
		{
			u=mid-1;
			mid=(l+u)/2;
		}
	}
	if(a[u]!=n)
	cout<<"\nElement not found";
	getch();
}
