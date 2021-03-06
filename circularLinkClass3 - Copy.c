#include<stdio.h>
#include<stdlib.h>
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

void insertFirst(int value)
{
	struct node *t;
	t=(struct node *) malloc(sizeof(struct node));
	t->value=value;
	t->next=t;
	if(last==NULL)
	{
		t->next=t;
		last=t;
	}
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
	a->next=a;
	if(last==NULL)
	last=a;
	else
	{
		a->next=last->next;
		last->next=a;
		last=a;
	}
}

void insertAfter(int value,int item)
{
	struct node *s,*r;
	s=(struct node *) malloc (sizeof(struct node));
	s->value=value;
	s->next=s;
	if(last==NULL)
	last =s;
	else
	{
		r=last->next;
		while(r->value!=item)
		r=r->next;
		if(r->next==last->next&&r->value!=item)
		printf("\nItem is not found");
		else
		{	
				s->next=last->next;
				last->next=s;
				last=s;
		}
	}
}

void delFirst()
{
	struct node *t;
	t=last->next;
	if(last->next==last)
	{
		last==NULL;
		free(t);
	}
	else
	{
		last->next=t->next;
		free(t);
	}
}

void delEnd()
{
	struct node *t,*d,*r;
	d=last;
	if(last->next==last)
	{
		last=NULL;
		free(d);
	}
	else if(last->next->next==last)
	{
		last=d->next;
		last->next=d->next;
		free(d);
	}
	else 
	{
		r=last;
		t=last;
		while(t->next!=r)
		t->next;
		last=t;
		t->next=r->next;
		free(r);
	}
}

void delAfter(int item)
{
	struct node *k,*g,*l;
	k=last->next;
	l=last;
	if(k->value==item)
	printf("\nThis is first node so please choose 4th option");
	
	else if(l->value==item)
	printf("\nThis is last node so please choose 5th option");
	else
	{
		while(k->value!=item)
		k=k->next;
		g=k->next;
		k->value=g->value;
		k->next=g->next;
		free(g);
	}
}

void viewList()
{
	struct node *t;
	t=last->next;
	if(last==NULL)
	printf("\nList is Empty");
	else
	{
		do
		{
			printf("%d ",t->value);
			t=t->next;
		}while(t!=last->next);
	}
}

int main()
{
	int choice,value ,item;
	while(1)
	{
		system("cls");
		printf("\n1:- Insert first node ");
		printf("\n2:- Insert last node ");
		printf("\n3:- Insert a node after a node ");
		printf("\n4:- Delete first node ");
		printf("\n5:- Delete last node ");
		printf("\n6:- Delete a node after a node ");
		printf("\n7:- View List ");
		printf("\n8:- Exit ");
		printf("\nEnter your choice ");
		scanf("%d",&choice );
		switch (choice)
		{
			case 1:
				printf("\nEnter a value");
				scanf("%d",&value);
				insertFirst(value);
				break;
			case 2:
				printf("\nEnter a value");
				scanf("%d",&value);
				insertEnd(value);
				break;
			case 3:
				printf("\nEnter node value and item after you want to insert");
				scanf("%d%d",&value,&item);
				insertAfter(value,item);
				break;
			case 4:
				delFirst();
				break;
			case 5:
				delEnd();
				break;
			case 6:
				printf("\nEnter the value that you want to delete next node");
				scanf("%d",&item);
				delAfter(item);
				break;
			case 7:
				viewList();
				getch();
				break;
			case 8:
				exit(0);
			default:
				printf("\nInvalid choice");
		}
	}
}
