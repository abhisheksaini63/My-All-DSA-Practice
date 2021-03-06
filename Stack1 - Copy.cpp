#include<iostream>
#include<conio.h>
using namespace std;
class Stack
{
	public:
	int top;
	int capacity;
	int *array;
};

Stack* createStack(int capacity)
{
	Stack *t;
	t=new Stack();
	t->capacity=capacity;
	t->top=-1;
	t->array=new int [capacity];
	return t;
}

void push(Stack *t,int data)
{
	if(t->top==t->capacity-1)
	cout<<"\nStack is full So insertion is not possible";
	else
	{
		t->top++;
		t->array[t->top]=data;
	}
}

int pop(Stack *t)
{
	int a;
	if(t->top==-1)
{
	cout<<"\nStack is Empty";
	return -1;
}
	else 
	{
		a=t->array[t->top];
		t->top--;
		return a;
	}
}

void View(Stack *t)
{
	if(t->top==-1)
	cout<<"\nStack is Empty";
	else
	{
		for(int i=0;i<=t->top;i++)
		cout<<t->array[i]<<" ";
	}
}

int main()
{
	int capacity;
	Stack *s;
	cout<<"\nEnter the capacity of stack =";
	cin>>capacity;
	s=createStack(capacity);
	
	while(1)
	{
		system("cls");
		cout<<"\n1- push value";
		cout<<"\n2- pop value";
		cout<<"\n3- view ";
		cout<<"\n4- Exit";
		int choice;
		cout<<"\nEnter the choice =";
		cin>>choice;
		switch(choice)
		{
			case 1:
				int data;
				cout<<"\nEnter data = ";
				cin>>data;
				push(s,data);
				cout<<"\nSuccessfull";
				break;
			case 2:
				pop(s);
				break;
			case 3:
				View(s);
				getch();
				break;
			case 4:
				exit(0);
			default:
				cout<<"\nInvalid Choice";
		}
	}
	return 0;
}
