#include<iostream>
#include<conio.h>
using namespace std;
class node
{
	public:
	int info;
	node *next;

};
node *start=NULL;
node* createNode()
		{
			node *a=new node();
			return a;
		}
		
void insertNode(int n)
		{
			node *temp,*t;
			temp=createNode();
			temp->info=n;
			temp->next=NULL;
			if(start==NULL)
			start=temp;
			else
			{
				t=start;
				while (t->next!=NULL)
				t=t->next;
				t->next=temp;
			}
		}
	
void deleteNode()
{
	node *r;
	if(start==NULL)
	cout<<"\nList is Empty"<<endl;
	else
	{
		r=start;
		start=start->next;
		delete(r);
	}
}

void seeList()
{   node *t;
	if(start==NULL)
	cout<<"\nList is empty";
	else
	{
		t=start;
		start=start->next;
		delete(t);
	}
}

int main()
{
	int choice;	
	while(1)
	{
		system("cls");
	cout<<"1- insert a node"<<endl;
	cout<<"2- delete a node"<<endl;
	cout<<"3- View list"<<endl;
	cout<<"4- Exit"<<endl;
		cout<<"Enter your choice";
		cin>>choice;
		switch(choice)
		{
		
			case 1:
				cout<<"Enter a number =";
				int num;
				cin>>num;
				insertNode(num);
				break;
			case 2:
				deleteNode();
				break;
			case 3:
				seeList();
				getch();
				break;
			case 4:
				exit(0);
			default:
				cout<<"\nInvalid choice "<<endl;
				break;
		}
	}
}
