#include<iostream>
#include<conio.h>
using namespace std;
class Q
{
  public:
	int front,end;
	int capacity;
	int *ar;
};

Q* createQ(int cap)
{
	Q *Qu=(Q*)malloc(sizeof(Q));
	Qu->front=-1;
	Qu->end=-1;
	Qu->capacity=cap;
	Qu->ar=(int *)malloc(sizeof(int)*cap);
	return Qu;
}
 
int isFull(Q *Q)
{
	if((Q->end+1)%Q->capacity==Q->front)
	{
		printf("\nQ is full");
		return 1;
	}
	else
	return 0;
}

int isEmpty(Q *Q)
{
	if(Q->front==-1)
	return 1;
	else 
	return 0;
}

int sizeQ(Q *a)
{
	return ((a->capacity-a->front+a->end+1)%a->capacity);
}

void insert(Q *Q,int data)
{
	if(isFull(Q))
	{
		cout<<"\nQis Full";
	}
	else
	{
		Q->end=(Q->end+1)%Q->capacity;
		Q->ar[Q->end]=data;
		if(Q->front==-1)
		Q->front=Q->end;
	}
}

int del(Q *t)
{
	int data;
	if(isEmpty(t))
	{
		cout<<"\nQ is Empty";
		return -1;
	}
	else
	{
		data=t->ar[t->front];
		if(t->front==t->end)
		t->front=t->end=-1;
		else
		t->front=(t->front+1)%t->capacity;\
	    return data;
	}
}

void view(Q *qu)
{
	int s;
	if(isEmpty(qu))
	cout<<"\nQ is Empty";
	else
	{
	s=qu->front;
	for(int i=s;i!=qu->end;i++)
	cout<<qu->ar[i]<<" ";
	}
}

void delQ(Q *que)
{
	if(que)
	if(que->ar)
	free(que->ar);
	free(que);
}

int main()
{
	int data,choice;
	Q *q;
    while(1)
    {
    	system("cls");
    	cout<<"\n1- createQ";
    	cout<<"\n2- insert data";
    	cout<<"\n3- delete data";
    	cout<<"\n4- View data";
    	cout<<"\n5- Exit";
    	cout<<"\nEnter your choice= ";
    	cin>>choice;
    	switch(choice)
    	{
    		case 1:
    			int cap;
    			cout<<"\nEnter the capacity";
    			cin>>cap;
    			q=createQ(cap);
    			break;
    		case 2:
    			cout<<"\nEnter the data =";
    			cin>>data;
    			insert(q,data);
    			break;
    		case 3:
    			del(q);
    			break;
    		case 4:
    			view(q);
    			getch();
    			break;
    		case 5:
    			exit(0);
    		default:
    			cout<<"\nInvalid choice ";
		}
	}
	return 0;
}
