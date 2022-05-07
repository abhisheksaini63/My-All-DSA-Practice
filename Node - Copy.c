#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *link;
};
struct node *start=NULL;

struct node* creatNode()
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	return n;
}
void insertNode()
{
	struct node *t,*s;
	t=creatNode();
	printf("Enter a number= ");
	scanf("%d",&t->info);
	t->link=NULL;
	if(start==NULL)
	 start=t;
	else
	 {
	 	s=start;
	 	while(s->link!=NULL)
	 	s=s->link;
	 	s->link=t;
	 }
}
void deleteNode()
{
	struct node *r;
	if(start==NULL)
	 printf("List is Empty");
	else
	 {
	 	r=start;
	 	start=start->link;
	 	free(r);
	 }
}
void viewList()
{
	struct node *v;
	if(start==NULL)
	 printf("List is Empty");
	else 
	 {
	 	v=start;
	 	while(v!=NULL)
	 	 {
	 	 	printf("%d ",v->info);
	 	 	v=v->link;
		  }
	 }
}

int menu ()
{
	int m;
	printf("\n 1. Insert a node");
	printf("\n 2. Delete a node");
	printf("\n 3. View List");
	printf("\n 4. Exit");
	printf("\n\n Enter your choice= ");
	scanf("%d",&m);
	return m;
}
 
int main()
{
	while(1)
	{
		system("cls");
		switch(menu())
		{
			case 1:
				insertNode();
				break;
			case 2:
				deleteNode();
				break;
			case 3:
				viewList();
				break;
			case 4:
				exit(0);
			default:
				printf("\n Invalid Choice");
		}
		getch();
	}
	return 0;
}
