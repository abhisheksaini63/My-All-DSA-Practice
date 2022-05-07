#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
struct stack
{
	int top;
	int capacity;
	int *arr;	
};

struct stack* createStack(int c)
{
	struct stack *s;
	s=(struct stack*)malloc(sizeof(struct stack));
	s->top=-1;
	s->capacity=c;
	s->arr=malloc (sizeof(int)*s->capacity);
	return(s);
}

int isFull(struct stack *stack)
{
	if(stack->top==stack->capacity-1)
	 return 1;
	else
	return 0;
}
int isEmpty(struct stack *a)
{
	if(a->top==-1)
	return 1;
	else
	return 0;	
}
void push(struct stack *stack,int val)
{
	if(!isFull(stack))
	{
		stack->top++;
		stack->arr[stack->top]=val;
	}
}
int pop(struct stack *stack)
{
	int val;
	if(!isEmpty(stack))
	{
		val=stack->top;
		stack->top--;
		return (stack->top);
	}
	else
	 return (-1);
}

int main()
{
	int item,val;
	struct stack *a;
	a=createStack(4);
	while(1)
	 {
	 	system("cls");
	 	printf("\n1. push value");
	 	printf("\n2. pop value");
	 	printf("\n3. Exit");
	 	printf("\nEnter your choice = ");
	 	scanf("%d",&item);
	 	
	 	switch(item)
	 	 {
	 	 	case 1:
	 	 		printf("\nEnter a number = ");
	 	 		scanf("%d",&val);
	 	 		push(a,val);
	 	 		break;
	 	 	case 2:
	 	 		  if(a->top==-1)
	 	 		   printf("\nStack is Empty");
	 	 		  else
				  {
				  	val=pop(a);
				  	printf("poped value is %d",val);
				  }
				break;
			case 3:
				exit(0);
			default:
				printf("\nInvalid choice");
		  }
		getch();
	 }
	 return 0;
}
