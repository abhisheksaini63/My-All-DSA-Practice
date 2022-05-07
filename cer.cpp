#include<stdio.h>
struct node
{
	int value;
	struct node *next;
};

struct node *last=NULL;

void insertFirst(int value);
void insertEnd(int value);
void insertAfter(int value,int item);
void delFirst();
void delEnd();
void delAfter(int item);
void viewList();

void insertFirst(int vlaue)
{
	struct node *t;
	t=(struct node *) malloc(sizeof(struct node));
	t->value=value;
	if(last==NULL)
	t->next=t;
	else
	{
		t->next=last->next;
		last->next=t;
	}
}

void insertEnd(int value)
{
	struct node *a;
	a=(struct node *) malloc (sizeof(struct node));
	a->value=value;
	if(last==NULL)
	last =a;
}
