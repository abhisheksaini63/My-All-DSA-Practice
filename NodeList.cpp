#include <iostream>
using namespace std;
class node {
	public:
    int data;
	node *next;
};

node *start=nullptr;

void insertStart (int data)
{
	node *t= new node();
	t->data= data;
	t->next= nullptr;
	
	if(start==nullptr)
	{
		start=t;
	}
	
	else{
		node *r=start;
		start=t;
		t->next= r;
		
	}
	
}

void display()
{
	node *r=start;
	if(start==nullptr)
	{
		cout<<"list is empty";
	}
	else{
		while(r!=nullptr)
		{
			cout<<r->data<<" ";
			r=r->next;
		}
	}
}

int main()
{
	for(int i=0;i<5;i++)
	insertStart(i);
	
	display();
	return 0;
}
