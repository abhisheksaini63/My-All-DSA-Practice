#include<iostream>
#include<conio.h>
using namespace std;
class que
{
	public:
	int cap;
	int start,last;
	int *ar;
};

que creat(int capacity)
{
	que *t;
	t=new que();
	t->cap=capacity;
	t->start=t->last=-1;
	t->ar=new int[capacity];
	return t;
}

void insert(que *a,int val)
{
	if(a->start==-1&&a->last==-1)
	{
		a->start++;
		a->last++;
		a->ar[last]=val;
		cout<<"\sus";
		getch();
	}
	
	if(a->last>start&&a->last<a->cap)
	{
		a->last++;
		a->ar[last]=val;
		cout<<"\sus";
		getch();
	}
	
	if(a->last==a->cap-1)
		cout<<"\nQueue is full ";
}

void del(que *r)
{
	if(r->last==-1)
	cout<<"\nQue is empty ";
	else 
	{
		
	}
}











