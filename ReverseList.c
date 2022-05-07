#include<stdio.h>
#include<stdlib.h>
void viewList();
struct node* reverseList();
void insertNode();
struct node* createNode();
struct node 
{
	int info;
	struct node *next;
};
struct node *start=NULL;
struct node* createNode()
{
	struct node *r=(struct node *)malloc(sizeof(struct node));
	return r;
}

void insertNode()
{
	struct node *t,*r;
	t=createNode();
	printf("Enter a number = ");
	scanf("%d",&t->info);
	t->next=NULL;
	if(start==NULL)
	start=t;
	else
	{
		r=start;
		while(r!=NULL)
			r=r->next;
		r->next=t;
	}
}

struct node* reverseList()
{
	struct node *t1,*t2,*st;
	st=start;
	t1=NULL;
	t2=NULL;
	if(start==NULL)
	printf("\nList is empty");
	else{
	while(st!=NULL)
	{
		t2=st->next;
		st->next=t1;
		t1=st;
		st=t2;
	}
	return t1;
}
return NULL;
}

void viewList()
{
	struct node *e;
	e=start;
	while(e)
	{
		printf("%d ",e->info);
		e=e->next;
	}
}

void main()
{
	int choice;
	while(1)
	 {
	 	system("cls");
	printf("1- Insert a node ");
	printf("\n2- reverse List");
	printf("\n3- view List");
	printf("\n4- exit");
	 	printf("\nEnter your choice =");
	 	scanf("%d",&choice);
	 	switch(choice)
	 	 {
	 	 	case 1:
	 	 		insertNode();
	 	 		printf("\nInsert Successfull");
	 	 		getch();
	 	 		break;
	 	 	case 2:
	 	 		start=reverseList();
	 	 		printf("\nreverse Successful");
	 	 		getch();
	 	 		break;
	 	 	case 3:
	 	 		viewList();
	 	 		getch();
	 	 		break;
	 	 	case 4:
	 	 		exit(0);
	 	 	default:
	 	 		printf("\nInvalid choice");
		  }
	 }
	 
//	return 0;
	
}

















