#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
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
	struct node *r,*t;
	t=(struct node *)malloc (sizeof (struct node));
	t->info=value;
	t->next=NULL;
	r=start;
	start=t;
	t->next=r;
	printf("\nInsert Successfull");
}

void insertAtEnd(int value)
{
	struct node *t,*r;
	t=(struct node *) malloc (sizeof (struct node ));
	t->info=value;
	t->next=NULL;
	if(start==NULL)
	start = t;
	else
	{
		r=start;
		while(r->next!=NULL)
		r=r->next;
		r->next=t;
		printf("\nInsert Successfull");
	}
	
}

void insertAfter(int value,int item)
{
	struct node *t,*r;
	t=(struct node*)malloc (sizeof(struct node));
	t->info=value;
	t->next=NULL;
	if(start==NULL)
	start =t;
	else
	{
		r=start;
		while(r->info!=item)
		r=r->next;
		if(r->next==NULL&&r->info!=item)
		printf("\nItem is not found");
		else{
		t->next=r->next;
		r->next=t;
		printf("\nInsert Successfull");
		}
	}
}

void delFirst()
{
	struct node *t;
	t=start;
	if(start == NULL)
	printf("\nList is Empty");
	else
	{
	start=t->next;
	free(t);
	printf("\nDelete Successfull");
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
		while (t->next->next!=NULL)
		t=t->next;
		r=t->next;
		t->next=NULL;
		free(r);
		printf("\nDelete Successfull");
			
	}
}

void delAfter(int item)
{
	struct node *r,*t;
	t=start;
	if(start==NULL)
	printf("\nList is Empty");
	else
	{
		while(t->info!=item)
		t=t->next;
		if(t->next==NULL&&t->info!=item)
		printf("\nItem is not found ");
		else
		{
			r=t->next;
			t->info==r->info;
			t->next=r->next;
			free(r);
			printf("\nDelete Successfull");
		}
	}
}

void view()
{
	struct node *t;
	t=start;
	if(start==NULL)
	printf("\nList is Empty");
	else 
	{
		do
		{
			printf("%d ",t->info);
			t=t->next;
		}while (t->next!=NULL);
	}
}

void main()
{
	int choice,value,item;
	while(1)
	{
		system("cls");
		printf("1:- Insert A node at beginning");
		printf("\n2:- Inset node at end ");
		printf("\n3:- Inset node after node ");
		printf("\n4:- Delete first node ");
		printf("\n5:- Delete end node ");
		printf("\n6:- Delete node after node ");
		printf("\n7:- View List ");
		printf("\n8:- Exit");
		printf("\nEnter your choice ");
		scanf("%d",&choice);
		switch (choice )
		{
			case 1:
				printf("\nEnter value = ");
				scanf("%d",&value);
				insertNodeAtBeg(value);
				break;
			case 2:
				printf("\nEnter value =");
				scanf("%d",&value);
				insertAtEnd(value);
				break;
			case 3:
				printf("\nEnter value and value of after inserting =");
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
				printf("\nEnter the value of deletting");
				scanf("%d",&item);
				delAfter(item);
				break;
			case 7:
				view();
				getch();
				break;
			case 8:
				exit(0);
			default:
				printf("\nchoice is not valid");
		}
	}
}
