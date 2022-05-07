#include<stdio.h>
struct node 
{
	int data;
	struct node *next;
};

struct node *last=NULL;

struct node* createList(struct node *last);
struct node* addbegin(struct node *last,int value);
struct node* addlast(struct node *last,int value);
struct node* addAfter(struct node *last,int value,int item);
struct node* addtoEmpty(struct node *last,int value);
struct node* del(struct node *last ,int value);
void display(sturct node *last);

struct node* del(struct node *last,int value)
{
	struct node *r;
	r=last;
	while(r->data!=vlaue)
	r=r->next;
	
}

struct node* addAfter(struct node *last,int value,int item)
{
	struct node *n,*t;
	n=(struct node *)malloc (sizeof(struct node ));
	n->data=value;
	t=last;
	while(t->data!=item)
	t=t->next;
	n->next=t->next;
	t->next=n;
	return last;
}

struct node* addlast(struct node *last,int value)
{
	struct node *n;
	n=(struct node *)malloc (sizeof (struct node));
	n->data=value;
	n->next=last->next;
	last->next=n;
	last=n;
	return last;
}

struct node* addtoEmpty(struct node *last,int value)
{
	struct node *n;
	n=(struct node *)malloc (sizeof(struct node ));
	n->data=value;
	last->next=n;
	last->next=last;
	return last;
}

struct node* addbegin(struct node *last ,int value);
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=value;
	n->next=last->next;
	last->next=n;
	return last;
}

void display(struct node *last)
{
	struct node *s;
	if(last==NULL)
	printf("\nList is Empty");
	else
	{
		s=last->next;
		do
		{
			printf("%d ",s->data);
			s=s->next;
		}while(s!=last->next);
	}
}
