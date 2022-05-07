#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *pre,*next;
};

struct node *start=NULL;

void insertNodeAtBeg(int value);
void insertAtEnd(int value);
void insertAfter(int value,int item);
void delFirst();
void delEnd();
void delAfter(int item);
void view();

void insertNodeAtBeg(int value)
{
	struct node *t ;
	t=(struct node *)malloc (sizeof (struct node));
	t->info=value;
	t->pre=NULL;
	t->next=NULL;
	if(start ==NULL)
	start =t;
	else 
	{
		start->pre=t;
		t->next=start;
		start=t;
	}
}

void insertAtEnd(int value)
{
	
	
	struct node *t,*r;
	t=(struct node *)malloc (sizeof(struct node));
	t->info=value;
	t->next=NULL;
	t->pre=NULL;
	if(start ==NULL)
	start = t;
	else 
	{
		r=start;
		while(r->next!=NULL)
		r=r->next;
		t->pre=r;
		r->next=t;
	}
}

void insertAfter(int value,int item)
{
	struct node *t,*r;
	t=(struct node *)malloc (sizeof(struct node));
	t->info=value;
	t->next=NULL;
	t->pre=NULL;
	if(start==NULL)
	start=t;
	else
	{
		r=start;
		while(r->info!=item)
		r=r->next;
		if(r->next==NULL&&r->info!=item)
		printf("\nItem is not found");
		else
	    {
		t->next=r->next;
		t->pre=r;
		r->next->pre=t;
	   }
	    
	}
}

void delFirst()
{
	struct node *t;
	t=start;
	if(start==NULL)
	printf("\nList is Empty");
	else
	{
		if(t->next==NULL)
		{
			start==NULL;
			free(t);
		}
	else{
	   
	start=t->next;
	start->pre=NULL;
	free(t);
    }
    
	}
}

void delEnd()
{
	struct node *t,*r;
	t=start;
	if(start==NULL)
	printf("\nList is Empty");
	else
	{
		while(t->next!=NULL)
		t=t->next;
		t->pre->next=NULL;
		free(t);
	}
	
}

void delAfter(int item)
{
	struct node *t,*r;
	if(start==NULL)
	printf("\nList is empty");
	else
	{
		t=start;
		while(t->info!=item)
		t=t->next;
		if(t->next==NULL&&t->info!=item)
		printf("\nItem not found");
		else
		{
			r=t->next;
			t->next=r->next;
			r->pre=t;
			free(r);
		}
	}
}

void viewList()
{
	struct node *t;
	if(start==NULL)
	printf("\nList is Empty");
	else 
	{
		t=start;
		do
		{
			printf("%d ",t->info);
			t=t->next;
		}while(t!=NULL);
    }
}

void main()
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
				insertNodeAtBeg(value);
				break;
			case 2:
				printf("\nEnter a value");
				scanf("%d",&value);
				insertAtEnd(value);
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
