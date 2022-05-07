#include<stdio.h>
void add(int *a,int *b)
{
	int c;
	c=*a+*b;
	printf("\nSum of %d and %d is =%d",*a,*b,c);
}
int main()
{
	int a,b;
	printf("Enter two numbers =");
	scanf("%d%d",&a,&b);
	add(&a,&b);
	return 0;
}
