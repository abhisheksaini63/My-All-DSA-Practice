#include<iostream>
#include<algorithm>
using namespace std;
int sz;
void insert (int a[],int n,int p)  //1-for insert an element in a given position
{
	
	
	if(p<=sz&&p>0)
	{
		for(int i=sz;i>=p;i--)
		a[i-1]=a[i-2];
		a[p-1]=n;
		cout<<"\ninsert successfully";
	
	}
	else
	{
		cout<<"position is not valid";
	}
}
void delet(int a[],int p) //for delete an element from array to a given position 
{
	if(p<=sz&&p>0)
	{
		for(int i=p;i<sz-1;i++)
		a[i-1]=a[i];
		a[sz-1]=0;
		cout<<"\ndelete successfully";
		
	}
	else
	cout<<"\nposition is not valid";
}
void LinearSearch(int a[],int el) //for linear Search of an element
{	int i;
	for( i=0;i<sz;i++)
	{
		if(a[i]==el)
		{ 
		  cout<<"\nSearch successfully at index ="<<i;
		  break;
	    }
	}
	if(i==sz)
	cout<<"\nElement not found";
}
void BinarySearch(int a[],int el) //for Binary Search of an element
{	int mid,l=0,u=sz-1;
    sort(a,a+sz);
	mid=(l+u)/2;
	while(l<=u)
	{
		if(a[mid]==el)
		{
		 cout<<"Search successfully at index ="<<l;
		 break;
		}
		else if(a[mid]<el)
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
	if(a[u]!=el)
	cout<<"\nElement not found";
}

int main()
{	
	cout<<"Enter the size of array =";
	cin>>sz;	
    int a[sz]={0};
    cout<<"\n\n1:-insert an element";
    cout<<"\n2:-delete an element";
    cout<<"\n3:-Linear Search of an element";
    cout<<"\n4:-Binary Search of an element";
    cout<<"\n5:-See new array";
	cout<<"\n6:-Exit";
	while(1)
	{	cout<<"\nEnter your choice =";
		int choice;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nEnter number and position =";
				int n,p;
				cin>>n>>p;
				insert(a,n,p);
				break;
			case 2:
				cout<<"\nEnter the position that you want to delete =";
				int pos;
				cin>>pos;
				delet(a,p);
				break;
			case 3:
				cout<<"\nEnter value =";
				int val;
				cin>>val;
				LinearSearch(a,val);
				break;
			case 4:
				cout<<"\nEnter value =";
				int value;
				cin>>value;
				BinarySearch(a,value);
				break;
			case 5:
				for(int i=0;i<sz;i++)
				cout<<a[i]<<" ";
				break;
			case 6:
				exit(0);
			default:
				cout<<"\nInvalid Choice";
				
		}
	}
	return 0;
}
