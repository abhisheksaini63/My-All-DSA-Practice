#include<iostream>
#include<conio.h>
using namespace std;
class Stack
{
	public:
	int data;
	Stack *next;
};
Stack *start=NULL;

void push(int data)
{
	Stack *t=new Stack(),*r;
	t->data=data;
	t->next=NULL;
	if(start==NULL)
	start=t;
	else
	{
		r=start;
		start=t;
		t->next=r;
	}
}

int pop()
{
	Stack *t;
	int a;
	if(start==NULL)
	{
		cout<<"\nStack is empty";
		return 0;
	}
	else
 	{
 		t=start;
 		start=t->next;
 		a=t->data;
 		delete(t);
 		return a;
	 }
}

void View()
{
	Stack *t;
	if(start==NULL)
	cout<<"\nStack is empty";
	else 
	{
		t=start;
		while (t!=NULL)
		{
			cout<<t->data<<" ";
			t=t->next;
		}		
	}
}

int main ()
{
	int choice;
	while(1)
	{
		system("cls");
		cout<<"\n1- push";
		cout<<"\n2- pop";
		cout<<"\n3- view";
		cout<<"\n4- Exit";
		cout<<"\nEnter the choice =";
		cin>>choice;
		switch(choice)
		{
			case 1:
				int data;
				cout<<"\nEnter the data =";
				cin>>data;
				push(data);
				break;
			case 2:
				int p;
				p=pop();
				cout<<"\npoped value is ="<<p;
				break;
			case 3:
				View();
				getch();
				break;
			case 4:
				exit(0);
			default:
				cout<<"\nInvlid choice";
		}
	}
}
