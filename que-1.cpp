#include<iostream>
#include<conio.h>
using namespace std;
void insert(int a[],int n,int *last,int value)
{
	if(*last>=n)
	{
		cout<<"Queue is full";
		getch();
	}
	
	if(*last==-1)
	{
		
		*last+=1;
		a[*last]=value;
		cout<<"inserted";
		getch();
	}
	
	if(*last<n&&*last>0)
	{
		*last+=1;
		a[*last]=value;
	}
	
}

void del(int a[],int n, int *p, int *last)
{
	if(*p==-1)
	cout<<"Queue is empty";
	
	if(*p==*last)
	{
		*p--;
		*last--;
	}
	
	if(*p<*last)
	{
		*p++;
	}
}

void show(int a[],int n,int *last)
{
	if(*last==-1)
	cout<<"Queue is empty";
	
	if(*last<n)
	for(int i=0;i<=*last;i++)
	cout<<a[i]<<" ";
}

int main()
{
	cout<<"Enter the size of queue =";
	int n;
	cin>>n;
	int a[n],p=0,last=-1;
	while(1)
	{
		int choice,i;
		system("cls");
		cout<<"\n1:- Inser value";
		cout<<"\n2:- Delete value";
		cout<<"\n3:- View";
		cout<<"\n4:- Exit";
		cout<<"\nEnter the choice =";
		cin>>choice;
		switch(choice)
		{
			case 1:
				int val;
				cout<<"\nEnter the value =";
				cin>>val;
				insert(a,n,&last,val);
				
				break;
			
			case 2:
				del(a,n,&p,&last);
				break;
				
			case 3:
				show(a,n,&last);
				getch();
				
				break;
				
			case 4:
				exit(0);
					
			default:
				cout<<"Invalid choice";
		}
	}
	return 0;	
}
