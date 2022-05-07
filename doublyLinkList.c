#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *pr,*ne;
};

struct node *start=NULL;
 
void insert ()
{
	struct node *r,*t;
	t=(struct node *) malloc(sizeof (struct node));
	printf("\nenter a number =");
	scanf("%d",&t->info);
	t->ne=NULL;
	t->pr=NULL;
	if(start==NULL)
	start = t;
	else
	{
		r=start;
		while(r->ne!=NULL)
		r=r->ne;
		r->ne=t;
		t->pr=r;
	}
}

void deleteNode()
{
	struct node *a,*d;
	if(start==NULL)
	printf("\nList is empty");
	else
	{
		a=start;
		while(a->ne!=NULL)
		a=a->ne;
		d=a->pr;
		d->ne=NULL;
		free(a);
	}
}

void traverse ()
{
	struct node *tr;
	if(start==NULL)
	printf("\nList is empty");
	else
	{
		tr=start;
		while (tr->ne!=NULL)
		{
			printf("%d ",tr->info);
			tr=tr->ne;
		}
	}
}
void menu()
{
	
	printf("\n1- insetNode");
	printf("\n2- deleteNode");
	printf("\n3- traverse");
	printf("\n4- Exit");
}

int main()
{
	int choice;
	while(1)
	{
		system("cls");
	    menu();
		printf("\nEnter your choice =");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			   insert();
			   break;
			case 2:
				deleteNode();
				
				break;
			case 3:
				traverse();
				getch();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid choice");
				getch();	
		}	
	}
}















