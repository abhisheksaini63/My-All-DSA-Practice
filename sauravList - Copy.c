#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node *next;
};
struct node *head,
*newnode,
*temp;
int n,i,a;
void insertatbeginning(void);
void insertatend(void);
void insertatposition(void);
void deleteatbeginning(void);
void deleteatend(void);
void deleteatposition(void);
void reverse(void);
int main(){
printf("Enter the number of nodes=");
scanf("%d",&n);
create();
display();
printf("\nPress 1 to insert at beginning");
printf("\nPress 2 to insert at a particular position");
printf("\nPress 3 to insert at end");
printf("\nPress 4 to delete a node from beginning");
printf("\nPress 5 to delete a node from a particular position");
printf("\nPress 6 to delete a node from end");
printf("\nPress 7 if this is your final Linked List\n");
printf("\nPress 8 if you want to reverse your Linked List\n");
scanf("%d",&a);
switch(a){
case 1:
insertatbeginning();
break;
case 2:
insertatposition();
break;
case 3:
insertatend();
break;
case 4:
deleteatbeginning();
break;
case 5:
deleteatposition();
break;
case 6:
deleteatend();
break;
case 7:
printf("\nAlright,Okay!Here is your final Linked List\n");
display();
break;
case 8:
reverse();
break;
default:
printf("Invalid Choice");
}
return 0;
}

void create(){
for(i=0;i<n;i++){
newnode=malloc(sizeof(struct node));
printf("Enter data=");
scanf("%d",&newnode->info);
newnode->next=0;
if(head==0){
head=temp=newnode;}
else{
temp->next=newnode;
temp=newnode;
}}}

void display(){
temp=head;
while(temp!=0){
printf(" %d-> ",temp->info);
temp=temp->next;}}
void insertatbeginning(void)
{
newnode=malloc(sizeof(struct node));
printf("Enter value=");
scanf("%d",&newnode->info);
newnode->next=head;
head=newnode;
display();
}

void insertatend(void){
newnode=malloc(sizeof(struct node));
printf("Enter value=");
scanf("%d",&newnode->info);
newnode->next=0;
temp=head;
while(temp->next!=0){
temp=temp->next;}
temp->next=newnode;
display();
}

void insertatposition(void){
int pos,j=1;
newnode=malloc(sizeof(struct node));
printf("Enter the Position=");
scanf("%d",&pos);
if(pos>n){
printf("Invalid Position");
}
else{
temp=head;
while(j<pos-1){
temp=temp->next;
j++;}
printf("Enter Value=");
scanf("%d",&newnode->info);
newnode->next=temp->next;
temp->next=newnode;
temp=head;
printf("\nHere is your Final Linked List\n");
while(temp!=0){
printf(" %d-> "
,temp->info);
temp=temp->next;}
}
}

void deleteatbeginning(){
temp=head;
head=head->next;
free(temp);
display();
}

void deleteatend(){
struct node *prevnode;
temp=head;
while(temp->next!=0){
prevnode=temp;
temp=temp->next;}
prevnode->next=0;
free(temp);
display();
}

void deleteatposition(){
int k=1,p;
struct node *nextnode;
printf("Enter the position of node you wanna delete=");
scanf("%d",&p);
temp=head;
while(k<p-1){
temp=temp->next;
k++;}
nextnode=temp->next;
temp->next=nextnode->next;
free(nextnode);
display();
}

void reverse(){
struct node *prevnode,*nextnode,*currentnode,*temp;
prevnode = 0;
currentnode= nextnode = head;
while(nextnode!=0){
nextnode = nextnode -> next;
currentnode-> next = prevnode;
prevnode = currentnode;
currentnode = nextnode;
}
head = prevnode;

temp = head;
while(temp -> next != 0){
printf("%d ",temp-> info);
temp = temp->next;
}
printf("%d ",temp -> info);
}
